// wap to print number 1 to 20 but skip 8 to 15 using continue.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i >= 8 && i <= 15)
        {
            continue;
        }
        printf("%d\n", i);
    }
}