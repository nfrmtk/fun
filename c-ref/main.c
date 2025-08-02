#include "mimic.h"
#include <stdio.h>
int main(){
    int pnum = 2;
    int refnum = 3;
    printf("ptr_val: %i, ref_val: %i\n", _Z2fpPKi(&pnum), _Z2frPKi(&refnum));
}