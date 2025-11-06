#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 4
    {
        for (j = 1; j <= i; j++) // 2
        {
            printf("* ");
        }
        printf("\n");
    }
}