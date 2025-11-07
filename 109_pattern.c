#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 66
    {
        for (j = i; j <= 69; j++) // 4
        {
            printf("%c ", j); // 3 4 5
        }
        printf("\n");
    }
}