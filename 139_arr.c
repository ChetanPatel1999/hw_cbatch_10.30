// Write a program to display the array elements in reverse order.
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

    printf("\narray element in reverse order are : ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}