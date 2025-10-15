// . Write a program to display factors count.
#include <stdio.h>
void main()
{
    int num, i, bhumika = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            bhumika++;
        }
    }
    printf("total factors count = %d", bhumika);
}