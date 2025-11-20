#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array elements address are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", &arr[i]);
    }
}