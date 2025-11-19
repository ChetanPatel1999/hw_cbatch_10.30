//Write a program to replace array element with square of element in same array.
#include <stdio.h>
void main()
{
    int arr[5] = {2, 5, 3, 7, 9};

    int i;
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 5; i++)//1
    {
        arr[i] = arr[i] * arr[i];
    }

    printf("\nafter change array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}