#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


// an array name is a pointer to the first element of that array name

int main()
{
    int i;
    int meatBalls[5] = {7, 9, 43, 21, 3};

    printf("element \t address \t value \n");
    for(i = 0; i < 5; i++) {
        printf("meatballs[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]); // prints address and value of each element

    }

    // array names are pointers to the first element=
    printf("\nmeatBalls \t\t %p \n", meatBalls); // prints address of first element

    // dereference it
    printf("\nmeatBalls \t\t %d \n", *meatBalls); // prints 7
    printf("\nmeatBalls \t\t %d \n", *(meatBalls+2)); // prints 43


    return 0;
}
