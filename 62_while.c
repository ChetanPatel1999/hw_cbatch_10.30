// wap to print number 1 to 10 using while loop.
#include <stdio.h>
void main()
{
    int i = 1, n;
    n = 6;// take by user
    while (i <= n)
    {
        printf("square of %d = %d \n", i, i * i);
        i++;
    }
}