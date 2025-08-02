compile:
	clang++ -fPIC -c  lib.cpp -o lib.o
	clang++ -shared lib.o -o libfake.so
	nm -D lib.so


run: compile
	clang main.c -L./ -lfake
	LD_LIBRARY_PATH=`pwd` ./a.out