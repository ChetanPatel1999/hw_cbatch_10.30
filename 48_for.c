// wap to print square 1 to n.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 3
    {
        printf("square of %d = %d \n", i, i * i); // 1 2 3
    }
}