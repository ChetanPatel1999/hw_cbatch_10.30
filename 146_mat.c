#include <stdio.h>
void main()
{
    int mat[2][2] = {{10, 20}, {60, 80}};

    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 2; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // sum of matrix elements
    int sum = 0;
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 2; j++) // 0
        {
            sum = sum + mat[i][j];
        }
    }

    printf("sum of matrix element :- %d", sum);
}