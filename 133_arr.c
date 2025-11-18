// wap to display largest element of  array elements.
#include <stdio.h>
void main()
{
    int arr[5] = {127, 34, 566, 78, 50}, i;
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // 127, 34, 56, 78, 50
    int max = arr[0];
    for (i = 0; i < 5; i++) // 0
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("\nmax element = %d", max);
}