// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int n1, n2;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    n1 > n2 ? printf("greatest num : %d", n1) : printf("greatest num : %d", n2);
}