#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// pass by reference (address means the same as reference) and pass by value
// pass by value means don't pass the variable itself, just pass the value of the variable
// pass by address means pass the variable itself



void passByValue(int i);
void passbyAdress(int * i);

int main()
{
    int tuna = 20;

    passByValue(tuna);
    printf("passing by value, tuna is now %d\n", tuna); // outputs 20

    passbyAdress(&tuna);
    printf("passing by address, tuna is now %d\n", tuna); // outputs 64

    return 0;
}

void passByValue(int i) {
    i = 99;
    return;
}

void passbyAdress(int * i) { // int * i points to a memory address
    *i = 64;
    return;
}
