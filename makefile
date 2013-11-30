# Scott Kinney Lab 6
# Sat Nov 23 15:37:03 PST 2013
# taken from wiki.osdev.org/Makefile
# search gihub for "pdclib" for an example
# c++ debug -D_GLIBCXX_DEBUG
CC := g++
CPARMS = -g -Wall -Wextra
LDFLAGS = -g

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

%.o: %.c makefile
	$(CC) $(CFLAGS) $(CPARMS) -MMD -MP $< -o $@

todolist:
	-@for file in $(ALLFILES:makefile=); do grep -H -e TODO -e FIXME $$file; done; true

dist:
	@tar cf backup/lab6.`date +%m%d%y.%H%M`.tar $(ALLFILES) 

clean:
	-rm *.o *~

