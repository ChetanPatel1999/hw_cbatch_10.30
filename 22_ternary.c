// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int n1, n2, ans;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    ans = n1 > n2 ? n1 : n2;
    printf("greatest num : %d", ans);
}