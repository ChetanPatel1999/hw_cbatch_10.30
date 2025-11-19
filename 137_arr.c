// . Write a program to print squares of all numbers present in a given array.
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

    printf("\narray element square are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
}