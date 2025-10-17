// Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 7645
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem; // 6
        num = num / 10;
    }
    printf("sum of individual digit = %d", sum);
}