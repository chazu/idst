" SmallInteger.st -- tagged integers

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

  Last edited: 2008-09-20 10:20:24 by piumarta on emilia
"

{ import: Objects.st }

{ include "tag.h" }

Object	     isSmallInteger	[ ^false ]
SmallInteger isSmallInteger	[ ^true ]

SmallInteger identityHash	[ ^self * 17 ]

SmallInteger negated		[ ^0 - self ]

SmallInteger // arg
[
    { if ((long)v_self & (long)v_arg & 1) { _return _O(_I(v_self) / _I(v_arg)); } }.
    ^self primitiveFailed
]

SmallInteger \\ arg
[
    { if ((long)v_self & (long)v_arg & 1) { _return _O(_I(v_self) % _I(v_arg)); } }.
    ^self primitiveFailed
]

SmallInteger asDigit
[
    ^self + (self > 9 ifTrue: [$a - 10] ifFalse: [$0])
]

SmallInteger digitValue
[
    (self between: $A and: $Z) ifTrue: [^self - $A + 10].
    (self between: $a and: $z) ifTrue: [^self - $a + 10].
    (self between: $0 and: $9) ifTrue: [^self - $0     ].
    ^nil
]

SmallInteger uppercased
[
    ^(self between: $a and: $z)
	ifTrue:  [self - 32]
	ifFalse: [self]
]

SmallInteger to: limit do: unaryBlock
[
    [self <= limit]
	whileTrue:
	   [unaryBlock value: self.
	    self := self + 1]
]

SmallInteger to: limit do: unaryBlock separatedBy: separatorBlock
[
    [self <= limit]
	whileTrue:
	   [unaryBlock value: self.
	    (self := self + 1) <= limit
		ifTrue: [separatorBlock value]]
]

SmallInteger to: limit by: step do: unaryBlock
[
    [self <= limit]
	whileTrue:
	   [unaryBlock value: self.
	    self := self + step]
]

SmallInteger by: step to: limit do: unaryBlock
[
    [self <= limit]
	whileTrue:
	   [unaryBlock value: self.
	    self := self + step]
]

SmallInteger downTo: limit do: unaryBlock
[
    [self >= limit]
	whileTrue:
	   [unaryBlock value: self.
	    self := self - 1]
]
