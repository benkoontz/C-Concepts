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
    fPointer = fopen("bacon.txt", "r"); // use r to read

    char singleLine[150];

    while(!feof(fPointer)) { /// feof is file end of file, reads the whole file from left to right
            fgets(singleLine, 150, fPointer); // gets every line individually
            puts(singleLine); // puts add content to a new line
    }



    fclose(fPointer);
    return 0;
}
