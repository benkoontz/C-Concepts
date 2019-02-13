#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


// the heap is extra memory that your computer isn't using
// the heap memory is borrowed and then given back
// the heap is important because you might need to use extra memory

int main()
{
    int i, howMany;
    int total;
    float average = 0.0;
    int * pointsArray;


    printf("how many numbers do you want to average\n");
    scanf(" %d", &howMany);

    // how you get extra memory
    pointsArray = (int *) malloc(howMany * sizeof(int));
    printf("enter the numbers");

    for(i = 0; i < howMany; i++) {
        scanf(" %d", &pointsArray[i]);
        total += pointsArray[i];
    }

    average = (float)total/ (float)howMany;
    printf("average is %f", average);

    // how you give extra memory back
    free(howMany);

    return 0;
}
