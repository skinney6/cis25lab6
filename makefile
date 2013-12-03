# Scott Kinney Lab 6
# Sat Nov 23 15:37:03 PST 2013
# taken from wiki.osdev.org/Makefile
# search gihub for "pdclib" for an example
# c++ debug -D_GLIBCXX_DEBUG
# compile shared library (.so) -shared -fPIC
CC := g++
CPARMS := -Wall -Wextra
LDFLAGS := 

PROJDIRS := .
SRCFILES := $(shell find $(PROJDIRS) -maxdepth 1 -type f -name "*.cpp")
HDRFILES := $(shell find $(PROJDIRS) -maxdepth 1 -type f -name "*.h")
OBJFILES := $(patsubst %.cpp,%.o,$(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d,$(SRCFILES))
TSTFILES := $(patsubst %.cpp,%_t,$(SRCFILES))
AUXFILES := makefile README
ALLFILES := $(SRCFILES) $(HDRFILES) $(AUXFILES)

-include $(DEPFILES) $(TSTDEPFILES)

.PHONY: all clean dist check testdrivers todolist

all: lab6

lab6: $(OBJFILES)
	$(CC) $(LDFLAGS) $(OBJFILES) -o $@

lib.lab6.so: $(OBJFILES)
	$(CC) -shared -DLIB -o lib.lab6.so $?

%.o: %.cpp makefile
	$(CC) -c $(CFLAGS) $(CPARMS) -MMD -MP $< -o $@

todolist:
	-@for file in $(ALLFILES:makefile=); do grep -H -e TODO -e FIXME $$file; done; true

dist:
	@tar cf /mnt/backup/cis25/lab6.`date +%m%d%y.%H%M`.tar $(ALLFILES) 

clean:
	-rm *.o *.d *~

