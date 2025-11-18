// wap to display sum of array element.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 50}, i;
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + arr[i];
    }

    printf("\nsum of array element = %d", sum);
}