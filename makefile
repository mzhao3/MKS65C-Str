all: Str.o StrTester.o
	gcc Str.o StrTester.o

Str.o: Str.c StrHead.h
	gcc -c Str.c

StrTester.o: StrTester.c StrHead.h
	gcc -c StrTester.c

run:
	./a.out
