IDST   = /Users/Chazu/opp/piumarta/idst
CFLAGS = -g -Wall -Wreturn-type -Wno-error -fno-common -arch i486 -g -O3 -march=prescott -fomit-frame-pointer -falign-functions=16 -funroll-loops -I$(BIN)/include -DNDEBUG -DSYSARCH=\"i386\" -DSYSOS=\"darwin\" $(EFLAGS) -fno-strict-aliasing
PFLAGS = -g -Wall -Wreturn-type -Wno-error -fno-common -arch i486 -g -O3 -march=prescott -falign-functions=16 -funroll-loops -I$(BIN)/include -DNDEBUG -DSYSARCH=\"i386\" -DSYSOS=\"darwin\" $(EFLAGS) -fno-strict-aliasing
GFLAGS = -g -Wall -Wreturn-type -Wno-error -fno-common -arch i486 -g           -I$(BIN)/include -DNDEBUG -DSYSARCH=\"i386\" -DSYSOS=\"darwin\" $(EFLAGS) -fno-strict-aliasing
PREFIX = /usr/local/lib/idc/i386-apple-darwin16.6.0/
GCDIR  = gc-7.0

LIBID_K_O = 
CCFLAGS_K =  -I$(BIN)/include -DNDEBUG -DSYSARCH=\"i386\" -DSYSOS=\"darwin\" -I$(IDST)/system/include

all : $(BIN)./include $(BIN)libid.o $(BIN)libid_p.o $(BIN)libid_g.o $(BIN)$(LIBID_K_O)

$(BIN)./include : 
	-$(SHELL) -ec 'mkdir $(BIN)./include; \
		mkdir $(BIN)./include/id;  cp -pr ../id/*.h $(BIN)./include/id; \
		cp -pr ../$(GCDIR)/include $(BIN)./include/gc;  find $(BIN)./include/gc -name .svn -exec rm -rf {} \;'

$(BIN)libid.o : libid.c $(BIN)./include
	$(CC) $(CFLAGS) -DPREFIX='"/usr/local/lib/idc/i386-apple-darwin16.6.0/"' $< -c -o $@

$(BIN)libid_p.o : libid.c $(BIN)./include
	$(CC) $(PFLAGS) -pg -DPREFIX='"/usr/local/lib/idc/i386-apple-darwin16.6.0/"' $< -c -o $@

$(BIN)libid_g.o : libid.c $(BIN)./include
	$(CC) $(GFLAGS) -g -DPREFIX='"/usr/local/lib/idc/i386-apple-darwin16.6.0/"' $< -c -o $@

$(BIN)libid_k.o : libid.c $(BIN)./include
	$(CC) $(CCFLAGS_K) -DPREFIX='"/usr/local/lib/idc/i386-apple-darwin16.6.0/"' $< -c -o $@


install : $(PREFIX)libid.o $(PREFIX)libid_p.o $(PREFIX)libid_g.o

$(PREFIX)libid.o : $(BIN)libid.o
	-mkdir -p $(PREFIX)
	-cp -p $< $@

$(PREFIX)libid_p.o : $(BIN)libid_p.o
	-mkdir -p $(PREFIX)
	-cp -p $< $@

$(PREFIX)libid_g.o : $(BIN)libid_g.o
	-mkdir -p $(PREFIX)
	-cp -p $< $@

$(PREFIX)libid_k.o : $(BIN)libid_k.o
	-mkdir -p $(PREFIX)
	-cp -p $< $@


tidy : .FORCE
	rm -f *~

clean : tidy
	rm -f $(BIN)libid.o $(BIN)libid_p.o $(BIN)libid_g.o $(BIN)libid_k.o

distclean spotless : clean
	rm -f Makefile

.FORCE :
