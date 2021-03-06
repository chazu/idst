IDC		= idc -O
IINC		= -I../st80
IDFLAGS		= -k

FILES		= $(BIN)ArgumentVariableNode.o \
		  $(BIN)ArrayLiteralNode.o \
		  $(BIN)ArrayNode.o \
		  $(BIN)AssignmentNode.o \
		  $(BIN)BlockNode.o \
		  $(BIN)ByteArrayNode.o \
		  $(BIN)CodeGenerator.o \
		  $(BIN)CCodeGenerator.o \
		  $(BIN)CManagedCodeGenerator.o \
		  $(BIN)CharacterNode.o \
		  $(BIN)Compiler.o \
		  $(BIN)CompilerOptions.o \
		  $(BIN)DefinitionNode.o \
		  $(BIN)EncodedVariableNode.o \
		  $(BIN)Encoder.o \
		  $(BIN)ExecNode.o \
		  $(BIN)ExternNode.o \
		  $(BIN)FloatNode.o \
		  $(BIN)GlobalVariableNode.o \
		  $(BIN)ImportNode.o \
		  $(BIN)IncludeNode.o \
		  $(BIN)IntegerNode.o \
		  $(BIN)LiteralNode.o \
		  $(BIN)LocalVariableNode.o \
		  $(BIN)MethodNode.o \
		  $(BIN)ParseNode.o \
		  $(BIN)Parser.o \
		  $(BIN)PrimitiveNode.o \
		  $(BIN)PrototypeNode.o \
		  $(BIN)ReturnNode.o \
		  $(BIN)Scanner.o \
		  $(BIN)ScannerContext.o \
		  $(BIN)ScannerPosition.o \
		  $(BIN)Scope.o \
		  $(BIN)SendNode.o \
		  $(BIN)SequenceNode.o \
		  $(BIN)SlotVariableNode.o \
		  $(BIN)StringIO.o \
		  $(BIN)StringNode.o \
		  $(BIN)SymbolNode.o \
		  $(BIN)TemporaryVariableNode.o \
		  $(BIN)VarargNode.o \
		  $(BIN)VariableNode.o \
		  $(BIN)WordArrayNode.o

GCDIR		= gc-7.0
PREFIX		= /usr/local/lib/idc/i386-apple-darwin16.6.0/
CC		= cc
OBJEXT		= 
OBJEXT_O	= .o
OBJEXT_SO	= .so

all : $(BIN)gc.a $(BIN)idst$(OBJEXT_SO) $(BIN)idc1$(OBJEXT) $(BIN)idc

$(BIN)idst$(OBJEXT_SO) : idst.st $(FILES)
	$(IDC) $(IINC) $(IDFLAGS) -s idst.st $(FILES) -o $@

.SUFFIXES :

$(BIN)%$(OBJEXT_SO) : %.st
	$(IDC) $(IINC) $(IDFLAGS) -s $< -o $@

$(BIN)%$(OBJEXT_O) : %.st
	$(IDC) $(IINC) $(IDFLAGS) -c $< -o $@

$(BIN)%$(OBJEXT) : %.st $(BIN)/libid.o $(BIN)/gc.a
	$(IDC) $(IINC) $(IDFLAGS) $< -o $@

$(BIN)idc : ../idc/idc
	-$(SHELL) -ec 'cp -p $< $@'

$(BIN)gc.a : 
	-$(SHELL) -ec 'cp -p ../$(GCDIR)/.libs/libgc.a $(BIN)gc.a'

install : all .FORCE
	mkdir -p $(PREFIX)
	-cp -pr *.st $(BIN)idst$(OBJEXT_SO) $(BIN)idc1$(OBJEXT) $(BIN)idc $(BIN)./include $(BIN)gc.a $(PREFIX)
	-cp -pr $(BIN)idc /usr/local/bin/.

tidy : .FORCE
	-rm -f *.o *.d *~ .gdb* *.stackdump *.c

clean : tidy
	-rm -f $(FILES) $(BIN)idc1$(OBJEXT) $(BIN)idc

distclean spotless : clean
	-rm -f Makefile

.FORCE :
