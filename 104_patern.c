#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) //3
    {
        for (j = 1; j <= i; j++) // 6
        {
            printf("%d ", j);// 1 2  3 4 5
        }                    // 1 2 3 4
        printf("\n");
    }
}