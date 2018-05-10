PRJDIR=$(shell pwd)

BIN=$(PRJDIR)
TARGETDIR=$(PRJDIR)

LIBDIR=-L$(PRJDIR)
INCLUDE=-I$(PRJDIR)

LINKLIB=pthread
LINKLIBS:=$(strip $(LINKLIB))
LINKLIBS:=$(addprefix -l,$(LINKLIBS))

SRCC=$(wildcard $(PRJDIR)/*.cpp)

CC=g++

DFLAG=-DDEBUG

TARGET=cplstest$(DFLAG)
all:$(TARGET)

$(TARGET):$(SRCC)
	$(CC) $(SRCC) $(INCLUDE) $(LINKLIBS) $(LIBSDIR) $(DFLAG) -o $@


###@$(CC) $(SRCC) $(INCLUDE) -o $@
###@$(CC) $(SRCC) $(INCLUDE) $(LINKLIBS) $(LIBSDIR) $(DFLAG) -o $@
