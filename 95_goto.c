//
#include <stdio.h>
void main()
{
    int i = 3, j;
    printf("hello world institute\n");
    if (i <= 5)
    {
        goto start;
    }

    printf("statement 1\n");
    printf("statement 2\n");
start:
    printf("after start");
}