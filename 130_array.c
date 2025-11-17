// array example
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    arr[3] = 900;
    arr[2] = 736;

    printf("\narray element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}