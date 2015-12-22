# 
# Makefile for main
#
EXE = main
OBJS = main.o

COMPILER = g++
COMPILER_OPTS = -c -g -O0 -Wall -Werror
LINKER = g++
# LINKER_OPTS

all : $(EXE)

$(EXE) : $(OBJS)
	$(LINKER) $(OBJS) $(LINKER_OPTS) -o $(EXE)

main.o : main.cpp
	$(COMPILER) $(COMPILER_OPTS) main.cpp
clean :
	-rm -f *.o $(EXE1) $(EXE2)
