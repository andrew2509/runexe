CFLAGS = -Wall

CC = g++

INCLUDES = -I.

CFLAGS = -g -rdynamic

all: runexe

runexe: process.cpp process.h main.cpp
	${CC} ${CFLAGS} ${INCLUDES} -o $@ w32invoke.cpp process.cpp Configuration.cpp InvocationVerdict.cpp Run.cpp Strings.cpp InvocationResult.cpp InvocationParams.cpp main.cpp

clean:
	rm -rf *.o
	rm -rf runexe
