all: test

CFLAGS = -g -O2

test: test.o mytoc.o utils.o
	cc -o test test.o mytoc.o utils.o
clean:
	rm -f  *.o test test.exe
