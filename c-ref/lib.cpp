#include <iostream>
int fp(const int* p)asm ("funp");

int fp(const int* p){
    std::cout << "ptr\n";
    return *p;
}


int fr(const int& p)asm ("funr");
int fr(const int& p){
    std::cout << "ref\n";
    return p;
}


