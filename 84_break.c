// Write a program to given number is prime or not.
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
        if (bhumika > 2)
        {
            break;
        }
    }
    if (bhumika == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}