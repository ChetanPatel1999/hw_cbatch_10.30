// Write a program takes a number as input and prints each digit of the
// number in reverse order, with each digit displayed on a separate line.
#include <stdio.h>
void main()
{
    int num, r;
    printf("enter a num : ");
    scanf("%d", &num);//345
    while (num > 0)
    {
        r = num % 10;
        printf("%d\n", r);
        num = num / 10;
    }
}