#include <stdio.h>
#include <stdlib.h>
#include "Ben.h"

// a structure is a way to group information together of different types


int main()
{
    struct user ben;
    struct user emily;

    ben.userID = 1;
    emily.userID = 2;

    puts("Enter the first name of user 1");
    gets(ben.firstName);
    puts("Enter the first name of user 2");
    gets(emily.firstName);

    printf("user 1 id is %d\n", ben.userID);
    printf("user 2 id is %d\n", emily.userID);

    printf("user 1 userName is %s\n", ben.firstName);
    printf("user 2 userName is %s\n", emily.firstName);


    return 0;
}
