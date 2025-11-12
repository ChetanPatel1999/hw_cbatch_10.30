// wap to check given number is perfact square or not.
#include <stdio.h>
void main()
{
    int num, f, i;
    do
    {
        printf("enter a number :");
        scanf("%d", &num);
        while (1)
        {
            if (i * i == num)
            {
                f = 1;
                break;
            }
            if (i * i > num)
            {
                f = 0;
                break;
            }
            i++;
        }
        if (f == 1)
        {
            printf("num is perfact square of %d \n", i);
        }
        else
        {
            printf("num is not perfact square\n");
        }
    } while (f == 0);119
}