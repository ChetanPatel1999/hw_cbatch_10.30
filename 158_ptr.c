// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *ptr, *temp, i, n;
    printf("enter dynamic array length : ");
    scanf("%d", &n); // 5
    ptr = (int *)malloc(n * sizeof(int));
    temp = ptr;
    printf("enter array elment :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    ptr = temp;
    int sum = 0;
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of dynamic array = %d\n", sum);
    ptr = temp;
    free(ptr);
}