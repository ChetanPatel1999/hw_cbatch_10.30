// wap to print even number 1 to 20 using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        goto start;
    }
}