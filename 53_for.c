// Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    n = 10; // by user
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of 1 to %d = %d\n", n, sum);
    printf("average of 1 to %d = %.2f", n, sum / (float)n);
}