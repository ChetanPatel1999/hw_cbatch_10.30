// wap to print number 1 to 100 using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("%d ", i);
    i++;
    if (i <= 100)
    {
        goto start;
    }
}