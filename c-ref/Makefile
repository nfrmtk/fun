compile:
	clang++ -fPIC -c  lib.cpp -o lib.o
	clang++ -shared lib.o -o libfake.so
	nm -D libfake.so


run: compile
	clang -std=c11 main.c -L./ -lfake
	LD_LIBRARY_PATH=`pwd` ./a.out