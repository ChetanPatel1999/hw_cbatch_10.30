// Write a program to that takes a number as input and count digit in given number.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 3478
    while (num > 0)
    {
        res++; // 4
        num = num / 10;
    }
    printf("count digit in number :- %d", res);
}