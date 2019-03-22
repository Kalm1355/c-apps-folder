#include <stdio.h>
#include <stdlib.h>

void passByAddress(int *i);
void passByValue(int i);

int main(){

    int x = 20;

    passByValue(x);

    printf("Passing by value, x is now %d\n", x);

    passByAddress(&x);

    printf("Passing by address, x is now %d\n", x);

    return 0;
}

void passByValue(int i){
    i = 99;
    return;
}

void passByAddress(int *i){
    *i = 64;
    return;
}
