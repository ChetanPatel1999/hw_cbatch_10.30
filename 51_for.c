// Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i;
    printf("even number serise : ");
    for (i = 1; i <= 20; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}