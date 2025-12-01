#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2, *ptr, *temp, i;
    printf("enter dynamic array length : ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    printf("address of dynamic array :- ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    printf("enter increasing length of dynamic array :  ");
    scanf("%d", &n2);
    ptr = temp;
    ptr = (int *)realloc(ptr, n2 * sizeof(int));
    printf("\nnew increasing array addresses :- ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
}