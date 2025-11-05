// goto example
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("hello world institute\n");
    i++; // 6
    if (i <= 5)
    {
        goto start;
    }
}