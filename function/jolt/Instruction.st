" Instruction.st -- abstract instructions

  Copyright (c) 2006, 2007 Ian Piumarta
  All rights reserved.

  Permission is hereby granted, free of charge, to any person obtaining a
  copy of this software and associated documentation files (the 'Software'),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, provided that the above copyright notice(s) and this
  permission notice appear in all copies of the Software and that both the
  above copyright notice(s) and this permission notice appear in supporting
  documentation.

  THE SOFTWARE IS PROVIDED 'AS IS'.  USE ENTIRELY AT YOUR OWN RISK.

  Last edited: 2007-04-04 09:04:28 by piumarta on alan-kays-computer.local
"

{ import: Objects }
{ import: Expression }
{ import: Resource }
{ import: CompilerOptions }


InstructionCount := [ 0 ]

Instruction : Object  ( id parent type output clobbered nextLive )

Instruction id	[ ^id ]

Instruction new
[
    self := super new.
    id := InstructionCount := InstructionCount + 1.
]

Instruction parent: anInsn	[  parent := anInsn ]
Instruction parent		[ ^parent ]
Instruction type		[ ^type ]
Instruction output: aRegister	[  output := aRegister ]
Instruction output		[ ^output ]
Instruction nextLive: anInsn	[ ^nextLive := anInsn ]
Instruction nextLive		[ ^nextLive ]

Instruction isVoid			[ ^self subtypeResponsibility: 'isVoid' ]

Instruction clobberAllRegistersIn: insn
[
    clobbered ifTrue: [clobbered do: [:reg | insn clobberRegister: reg]]
]

Instruction clobberRegister: aRegister
[
    clobbered isNil ifTrue: [clobbered := RegisterSet new].
    clobbered add: aRegister.
    CompilerOptions verboseRegs ifTrue: [StdOut tab; nextPutAll: '**** CLOBBER '; print: clobbered; nextPutAll: ' IN '; print: self; cr].
]

Instruction selectInstructions:	gen	[ ^self subtypeResponsibility: 'selectInstructions:' ]
Instruction clobberRegisters:	gen	[ ^self subtypeResponsibility: 'clobberRegisters:' ]
Instruction allocateRegisters:	gen	[ ^self subtypeResponsibility: 'allocateRegisters:' ]
Instruction emit:		gen	[ ^self subtypeResponsibility: 'emit:' ]

Instruction releaseRegister
[
    output
	ifTrue:
	   [(CompilerOptions verboseRegs and: [output]) ifTrue: [StdOut nextPutAll: 'release register '; print: self; cr].
	    output releaseRegister]
]

Instruction assertType: aSymbol
[
    type == aSymbol ifFalse: [self error: self debugName, ' type ', type printString, ' is not expected type ', aSymbol]
]

"neither generates nor consumes"

Statement : Instruction ()

Statement isVoid				[ ^true ]

Statement selectInstructions: gen	[ type := #VOID ]
Statement clobberRegisters: gen		[ gen clobberRegisters: self ]
Statement allocateRegisters: gen	[ self assertType: #VOID.  ^nil ]
Statement emit: gen			[ gen perform: self name with: self ]

"generates a value"

Leaf : Instruction ( arg )

Leaf arg: a	[  arg := a ]
Leaf arg	[ ^arg ]

Leaf isVoid	[ ^false ]

Leaf selectInstructions: gen	[ type := #REG: ]

Leaf clobberRegisters: codeGenerator
[
    codeGenerator noteLive: self; clobberRegisters: self
]

Leaf allocateRegisters: codeGenerator
[
    self assertType: #REG:.
    ^output := codeGenerator allocateRegister: self.
]

Leaf emit: gen
[
    gen perform: self name with: output with: arg
]

"generates a value, consumes a value"

Unary : Instruction ( lhs )

Unary lhs: l	[  lhs := l parent: self ]
Unary lhs	[ ^lhs ]

Unary isVoid	[ ^false ]

Unary  selectInstructions: gen
[
    type := #REG:.
    lhs selectInstructions: gen.
]

Unary clobberRegisters: codeGenerator
[
    lhs clobberRegisters: codeGenerator.
    codeGenerator clobberRegisters: self
]

Unary allocateRegisters: codeGenerator
[
    self assertType: #REG:.
    ^output := lhs allocateRegisters: codeGenerator.
]

Unary emit: gen
[
    lhs emit: gen.
    gen perform: self name with: lhs output
]

"generates a value, consumes two values"

Binary : Unary ( rhs )

Binary rhs: r	[  rhs := r parent: self ]
Binary rhs	[ ^rhs ]

Binary selectInstructions: gen
[
    type := #REG:.
    lhs selectInstructions: gen.
    rhs selectInstructions: gen.
]

Binary clobberRegisters: codeGenerator
[
    lhs clobberRegisters: codeGenerator.
    rhs clobberRegisters: codeGenerator.
    codeGenerator clobberRegisters: self; noteDead: rhs
]

Binary allocateRegisters: codeGenerator
[
    self assertType: #REG:.
    lhs allocateRegisters: codeGenerator.
    rhs allocateRegisters: codeGenerator.
    rhs releaseRegister.
    lhs releaseSpill.
    ^output := lhs output
]

Binary spillRegisterFor: insn in: gen
[
    | reg |
    parent notNil ifTrue: [reg := parent spillRegisterFor: insn in: gen].
    reg notNil ifTrue: [^reg].
    CompilerOptions verboseRegs ifTrue:  [StdOut nextPutAll: '  trying '; print: self; nextPutAll: ' -> '; print: lhs; space; print: rhs; cr].
    (reg := lhs spilledRegisterFor: insn) ifFalse: [^nil].
    CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  spilling '; print: lhs; cr].
    lhs := lhs spilledIn: gen.
    ^reg
]

Binary emit: gen
[
    lhs emit: gen.
    rhs emit: gen.
    lhs reload: gen.	"in case lhs was spilled"
    gen perform: self name with: lhs output with: rhs output
]

"consumes a value"

Sink : Unary ()

Sink isVoid	[ ^true ]

Sink selectInstructions: codeGenerator
[
    type := #VOID.
    lhs selectInstructions: codeGenerator.
]

Sink allocateRegisters: codeGenerator
[
    self assertType: #VOID.
    lhs allocateRegisters: codeGenerator; releaseRegister.
    ^nil
]

Sink clobberRegisters: codeGenerator
[
    super clobberRegisters: codeGenerator.
    codeGenerator noteDead: self.
]

"consumes zero or more values, generates zero or one value"

Block : Instruction (
    scope		"LocalEnvironment"
    instructions	"statements/expressions within the block"
    inputs		"top-level non-void expressions, candidates for the overall value of the block"
)

Instruction isBlock	[ ^false ]
Block       isBlock	[ ^true ]

Block new
[
    self := super new.
    instructions := OrderedCollection new.
    inputs := nil.    
]

Block scope: anEnvironment	[ scope := anEnvironment ]

Block add: insn
[
    insn isVoid ifFalse: [inputs := OrderedCollection new].
    ^instructions add: (insn parent: self)
]

Block addInput: insn
[
    inputs ifFalse: [inputs := OrderedCollection new].
    ^inputs add: insn
]

Block isVoid	[ ^inputs isNil ]

Block setType: aSymbol
[
    type ifFalse: [^type := aSymbol].
    type == aSymbol ifFalse: [self error: 'cannot add input of type ', aSymbol, ' to block of type ', type]
]

Block selectInstructions: gen
[
    instructions do: [:insn | insn selectInstructions: gen].
]

Block clobberRegisters: codeGenerator
[
    instructions do: [:insn |
	insn clobberRegisters: codeGenerator.
	insn isVoid
	    ifFalse:
	       [(self addInput: codeGenerator lastLive) clobberAllRegistersIn: self.
		codeGenerator noteDead: insn.
		self setType: insn type]].
    inputs
	ifTrue:  [codeGenerator noteLive: self]
	ifFalse: [self setType: #VOID]
]

Block allocateRegisters: codeGenerator
[
    | reg |
    self assertType: (inputs ifTrue: [#REG:] ifFalse: [#VOID]).
    scope notNil ifTrue: [scope valuesDo: [:var | var allocate: codeGenerator]].
    inputs
	ifTrue:
	   [reg := codeGenerator allocateRegister: self.
	    inputs do: [:insn | insn output: reg].
	    reg release].
    output := nil.	"no spill before block complete"
    instructions do: [:insn | insn allocateRegisters: codeGenerator; releaseSpill; releaseRegister].
    reg ifTrue: [output := reg allocate].
    scope notNil ifTrue: [scope valuesReverseDo: [:var | var location release]].
    ^output
]

Block emit: gen
[
    instructions do: [:insn | insn emit: gen].
]

"consumes one or more values, generates one value"

Call : Instruction (
    arguments	"function, argument expressions, leftmost first"
)

Call new
[
    self := super new.
    arguments := OrderedCollection new.
]

Call isVoid		[ ^false ]

Call function: expr	[  arguments add: (expr parent: self) ]
Call function		[ ^arguments first ]

Call addArgument: expr	[  arguments add: (expr parent: self) ]
Call argumentAt: index	[ ^arguments at: index + 1 ]

Call arity		[ ^arguments size - 1 ]

Call selectInstructions: gen
[
    arguments do: [:arg | arg selectInstructions: gen].
    gen noteCall: self.
]

Call clobberRegisters: codeGenerator
[
    type := #REG:.
    arguments do: [:arg | arg clobberRegisters: codeGenerator].
    arguments from: 1 reverseDo: [:arg | codeGenerator noteDead: arg].
    codeGenerator clobberRegisters: self.
    codeGenerator noteDead: arguments first; noteLive: self.
]

Call allocateRegisters: codeGenerator
[
    | reg |
    self assertType: #REG:.
    reg := output.
    output := nil.	"no spill before call complete"
    arguments do: [:arg | arg allocateRegisters: codeGenerator].
    arguments do: [:arg | arg releaseSpill; releaseRegister].
    output := reg.
    ^output := codeGenerator allocateRegister: self.
]

Call spillRegisterFor: insn in: gen
[
    | reg |
    parent notNil ifTrue: [reg := parent spillRegisterFor: insn in: gen].
    reg notNil ifTrue: [^reg].
    CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  trying '; print: self; cr].
    arguments doWithIndex: [:arg :index |
	CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  ... trying '; print: arg; cr].
	(reg := arg spilledRegisterFor: insn)
	    ifTrue:
	       [CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  spilling '; print: arg; cr].
		arguments at: index put: (arg spilledIn: gen).
		^reg]].
    ^nil
]

Call emit: gen
[
    arguments do: [:arg | arg emit: gen].
    gen perform: self name with: self
]

"----------------------------------------------------------------"

Spill : Unary  ( location )

Instruction isSpill	[ ^false ]
Spill	    isSpill	[ ^true ]

Spill location: aTemp	[ location := aTemp ]

Instruction releaseSpill []

Spill releaseSpill
[
    CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: 'release spill '; print: self; cr].
    location release.
    output allocate.
]

Instruction spillRegisterFor: insn in: gen
[
    ^parent notNil ifTrue: [parent spillRegisterFor: insn in: gen]
]

Instruction clobbers: aRegister	[ ^clobbered and: [clobbered includes: aRegister] ]

Instruction spilledRegisterFor: insn
[
    (output)			ifFalse: [CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  reg is nil\n'].	^nil].
    (output live)		ifFalse: [CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  reg dead\n'].	^nil].
    (self == insn)		ifTrue:  [CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  is target\n'].	^nil].
    (insn clobbers: output)	ifTrue:  [CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  clobbered\n'].	^nil].
    ^output
]

Spill spilledRegisterFor: insn
[
    CompilerOptions verboseRegs ifTrue: [StdOut nextPutAll: '  is spill\n'].
    ^false
]

Instruction spilledIn: gen
[
    | spill |
    spill := SPILLI4 new.
    spill
	output:   output;
	lhs:      self;
	location: (gen allocateSpill: spill).
    ^spill
]

Spill spilledIn: gen	[ self error: 'Spill.spilledIn: this cannot happen']

Spill	    emit:   gen	[ self subtypeResponsibility: 'emit:' ]

Instruction reload: gen	[]
Spill	    reload: gen	[ self subtypeResponsibility: 'reload:' ]

"----------------------------------------------------------------"

Branch : Statement ( destination )

Branch destination: aLabel	[ destination := aLabel ]

Branch emit: gen		[ gen perform: self name with: destination ]

ConditionalBranch : Sink ( destination )

ConditionalBranch destination: aLabel	[ destination := aLabel ]

ConditionalBranch emit: gen		[ lhs emit: gen.  gen perform: self name with: lhs output with: destination ]

"----------------------------------------------------------------"

LabelCount := [ 0 ]

Label : Statement ( ordinal _address )	Label name [ ^#label ]

Label new
[
    self := super new.
    ordinal := LabelCount := LabelCount + 1.
]

Label ordinal		[ ^ordinal ]

Label address_: _addr	[  _address := _addr ]
Label _address		[ ^_address ]

Label relocate_: _addr	{ self->v__address= (oop)((long)self->v__address + (long)v__addr); }

Label phaseCheck_: _addr	[ _addr == _address ifFalse: [self error: 'phase error'] ]

"----------------------------------------------------------------"

ADDI4   : Binary ()		ADDI4   name [ ^#addi4	 ]
ADDRFP4 : Leaf ()		ADDRFP4 name [ ^#addrfp4 ]
ADDRGP4 : Leaf ()		ADDRGP4 name [ ^#addrgp4 ]
ADDRJP4 : Leaf ()		ADDRJP4 name [ ^#addrjp4 ]
ADDRLP4 : Leaf ()		ADDRLP4 name [ ^#addrlp4 ]
ANDI4   : Binary ()		ANDI4   name [ ^#andi4	 ]
ASGNI1  : Binary ()		ASGNI1  name [ ^#asgni1	 ]
ASGNI2  : Binary ()		ASGNI2  name [ ^#asgni2	 ]
ASGNI4  : Binary ()		ASGNI4  name [ ^#asgni4	 ]
BRA	: Branch ()		BRA	name [ ^#bra	 ]
BRNZ	: ConditionalBranch ()	BRNZ	name [ ^#brnz	 ]
BRZ	: ConditionalBranch ()	BRZ	name [ ^#brz 	 ]
CALLI4	: Call ()		CALLI4	name [ ^#calli4	 ]
CNSTI4  : Leaf ()		CNSTI4  name [ ^#cnsti4	 ]
CNSTP4  : Leaf ()		CNSTP4  name [ ^#cnstp4	 ]
DIVI4   : Binary ()		DIVI4   name [ ^#divi4	 ]
DROP    : Sink ()		DROP    name [ ^#drop	 ]
ENTER   : Statement ()		ENTER   name [ ^#enter	 ]
EQI4    : Binary ()		EQI4    name [ ^#eqi4	 ]
GEI4    : Binary ()		GEI4    name [ ^#gei4	 ]
GTI4    : Binary ()		GTI4    name [ ^#gti4	 ]
INDIRI1	: Unary ()		INDIRI1	name [ ^#indiri1 ]
INDIRI2	: Unary ()		INDIRI2	name [ ^#indiri2 ]
INDIRI4	: Unary ()		INDIRI4	name [ ^#indiri4 ]
LEI4    : Binary ()		LEI4    name [ ^#lei4	 ]
LTI4    : Binary ()		LTI4    name [ ^#lti4	 ]
MODI4   : Binary ()		MODI4   name [ ^#modi4	 ]
MULI4   : Binary ()		MULI4   name [ ^#muli4	 ]
NEGI4   : Unary ()		NEGI4   name [ ^#negi4	 ]
NEI4    : Binary ()		NEI4    name [ ^#nei4	 ]
NOP	: Statement ()		NOP	name [ ^#nop	 ]
NOTI4   : Unary ()		NOTI4   name [ ^#noti4	 ]
COMI4   : Unary ()		COMI4   name [ ^#comi4	 ]
ORI4    : Binary ()		ORI4    name [ ^#ori4	 ]
PARAMI4	: Leaf ()		PARAMI4	name [ ^#parami4 ]
RETV    : Statement ()		RETV    name [ ^#retv	 ]
RETI4   : Sink ()		RETI4   name [ ^#reti4	 ]
SHLI4   : Binary ()		SHLI4   name [ ^#shli4	 ]
SHRI4   : Binary ()		SHRI4   name [ ^#shri4	 ]
SPILLI4	: Spill ()		SPILLI4	name [^ #spilli4 ]
SUBI4   : Binary ()		SUBI4   name [ ^#subi4	 ]
XORI4   : Binary ()		XORI4   name [ ^#xori4	 ]

"----------------------------------------------------------------"

SPILLI4 emit: gen
[
    lhs emit: gen.
    gen spilli4 :lhs output :location
]

SPILLI4 reload: gen	[ gen reloadi4 :output :location ]

"----------------------------------------------------------------"

Instruction printOn: aStream
[
    aStream print: id; nextPut: $(.
    type notNil ifTrue: [aStream print: type; nextPut: $ ].
    super printOn: aStream.
    output notNil ifTrue: [aStream nextPut: $ ; print: output; nextPut: $,; print: output refCount].
    aStream nextPut: $).
    parent ifTrue: [aStream nextPut: $.; print: parent id].
]

Instruction printOn: aStream indent: i
[
    aStream cr.
    i timesRepeat: [aStream nextPutAll: '| '].
    aStream print: id; nextPut: $(.
    type notNil ifTrue: [aStream print: type; nextPut: $ ].
    super printOn: aStream.
    output notNil ifTrue: [aStream nextPut: $ ; print: output; nextPut: $,; print: output refCount].
    self printInsnOn: aStream indent: i.
    aStream nextPut: $).
]

Block	printInsnOn: aStream indent: i	[ instructions do: [:insn | insn printOn: aStream indent: i + 1] ]

Call	printInsnOn: aStream indent: i
[
    arguments do: [:arg | arg printOn: aStream indent: i + 1].
]

Leaf    printInsnOn: aStream indent: i	[ aStream space; print: arg ]
Unary   printInsnOn: aStream indent: i	[ lhs printOn: aStream indent: i + 1 ]
Binary  printInsnOn: aStream indent: i	[ lhs printOn: aStream indent: i + 1.  rhs printOn: aStream indent: i + 1 ]

Statement  printInsnOn: aStream indent: i	[]

Branch		  printInsnOn: aStream indent: i	[ aStream space; print: destination ]
ConditionalBranch printInsnOn: aStream indent: i	[ aStream space; print: destination.  super printInsnOn: aStream indent: i.   ]

Label	printInsnOn: aStream indent: i	[ aStream space; print: self ordinal ]

CNSTI4	printInsnOn: aStream indent: i	[ aStream space; print: (SmallInteger value_: arg) ]
CNSTP4	printInsnOn: aStream indent: i	[ aStream space; print: (SmallInteger value_: arg) ]

ADDRGP4	printInsnOn: aStream indent: i	[ aStream space; print: arg ]
