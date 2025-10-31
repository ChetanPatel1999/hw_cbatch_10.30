// Keep asking for a number until it is a perfect square.
#include <stdio.h>
void main()
{
    int num, i, f;
    do
    {
        printf("enter a num : ");
        scanf("%d", &num); // 38
        i = 1;
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
                printf("its not perfact square!\n");
                break;
            }
            i++;
        }

    } while (f == 0);

    printf("%d is perfact sqaure of %d", num, i);
}