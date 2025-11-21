// wap to display only even element from matrix.
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

    printf("matrix even element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] % 2 == 0)
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