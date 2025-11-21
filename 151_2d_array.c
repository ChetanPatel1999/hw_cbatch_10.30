// wap to display only right digonal element from matrix.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix elements : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (r == c)
    {
        printf("matrix right digonal element are : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i + j == (r - 1))
                {
                    printf("%d ", mat[i][j]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("your matrix is not square matrix");
    }
}