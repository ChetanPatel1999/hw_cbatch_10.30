// Write a program to display multiple of 6 1 to 20.
#include <stdio.h>
void main()
{
    int i;
    printf("multiple of 6 : ");
    for (i = 1; i <= 20; i++)
    {
        if (i % 6 == 0)
        {
            printf("%d ", i);
        }
    }
}