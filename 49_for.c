// wap to print table mof given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter numfor table : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) // 11
    {
        printf("%d \n", n * i);
    }
}