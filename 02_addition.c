// write a program to take two number from user and display sum.
#include <stdio.h>
void main()
{
    int a, b, c; // here we declare three variable which name is a , b , c
    printf("<--------addition app------->\n");
    printf("enter frist num : ");
    scanf("%d", &a); // we take value of a from user
    printf("enter second num : ");
    scanf("%d", &b); // we take value of b from user
    c = a + b;
    printf("addition = %d", c); // here we print ans of c
}