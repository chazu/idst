IDC		= idc -O
IINC		= 
IDFLAGS		= -k

FILES		= $(BIN)_object.o \
		  $(BIN)Array.o \
		  $(BIN)ArrayedCollection.o \
		  $(BIN)Association.o \
		  $(BIN)AVLTree.o \
		  $(BIN)BlockClosure.o \
		  $(BIN)ByteArray.o \
		  $(BIN)Character.o \
		  $(BIN)Collection.o \
		  $(BIN)Dictionary.o \
		  $(BIN)Float.o \
		  $(BIN)Fraction.o \
		  $(BIN)GetOpt.o \
		  $(BIN)IdentityDictionary.o \
		  $(BIN)IdentitySet.o \
		  $(BIN)Integer.o \
		  $(BIN)LargeInteger.o \
		  $(BIN)LargeNegativeInteger.o \
		  $(BIN)LargePositiveInteger.o \
		  $(BIN)LookupKey.o \
		  $(BIN)Magnitude.o \
		  $(BIN)Number.o \
		  $(BIN)Object.o \
		  $(BIN)OrderedCollection.o \
		  $(BIN)PositionableStream.o \
		  $(BIN)ReadStream.o \
		  $(BIN)SequenceableCollection.o \
		  $(BIN)Set.o \
		  $(BIN)SmallInteger.o \
		  $(BIN)Smalltalk.o \
		  $(BIN)Stream.o \
		  $(BIN)String.o \
		  $(BIN)Symbol.o \
		  $(BIN)WordArray.o \
		  $(BIN)WeakArray.o \
		  $(BIN)WriteStream.o \
		  $(BIN)perform.o \
		  $(BIN)tokenization.o

PREFIX		= /usr/local/lib/idc/i386-apple-darwin16.6.0/
CC		= cc
OBJEXT		= 
OBJEXT_O	= .o
OBJEXT_SO	= .so

all : $(BIN)st80.so

run : $(BIN)st80.so $(BIN)test-st80
	$(SHELL) -ec '( cd $(BIN).; ./test-st80 )'

$(BIN)st80.so : st80.st $(FILES)
	$(IDC) $(IDFLAGS) -s st80.st $(FILES) -o $@

.SUFFIXES :

$(BIN)%$(OBJEXT_SO) : %.st
	$(IDC) $(IINC) $(IDFLAGS) -s $< -o $@

$(BIN)%$(OBJEXT_O) : %.st
	$(IDC) $(IINC) $(IDFLAGS) -c $< -o $@

$(BIN)%$(OBJEXT) : %.st
	$(IDC) $(IINC) $(IDFLAGS) $< -o $@

install : all .FORCE
	-mkdir -p $(PREFIX)
	-cp -pr *.st $(BIN)st80.so $(PREFIX)

tidy : .FORCE
	-rm -f *.o *.d *~ .gdb* *.stackdump *.c

clean : tidy
	-rm -f $(FILES) $(BIN)test-st80 $(BIN)test-st80.exe

distclean spotless : clean
	-rm -f Makefile

.FORCE :
