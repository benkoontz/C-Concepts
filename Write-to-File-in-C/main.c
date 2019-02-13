#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main()
{
    // a file pointer keeps track of where we are in a file
    FILE * fPointer;
    // create a file called bacon.txt
    fPointer = fopen("bacon.txt", "w"); // use w to create the file and write to it, w overwrites old file if the have the same name
    // write I love cheese in the file
    fprintf(fPointer, "I love cheese");

    fclose(fPointer);
    return 0;
}
