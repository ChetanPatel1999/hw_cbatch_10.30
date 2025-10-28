// Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
void main()
{
    int num, reminder, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 764
    while (num > 0)
    {
        reminder = num % 10;
        sum = sum + reminder; // 17
        num = num / 10;
    }
    printf("sum of individual digit = %d", sum);
}