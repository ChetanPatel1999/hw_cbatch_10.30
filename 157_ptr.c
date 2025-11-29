// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0]; // ptr = arr

    printf("enter array elment :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = arr;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}