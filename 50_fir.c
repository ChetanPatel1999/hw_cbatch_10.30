// wap to print table mof given number.
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter numfor table : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) // 11
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}