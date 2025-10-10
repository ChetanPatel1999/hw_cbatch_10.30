// Write a program to find greatest number among has given three numbers without using logical and (&&).
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);
    printf("enter value of c : ");
    scanf("%d", &c);
    // 67 290 300
    if (a > b)
    {
        if (a > c)
        {
            printf("greatest num : %d", a);
        }
        else
        {
            printf("greatest num : %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("greatest num : %d", b);
        }
        else
        {
            printf("greatest num : %d", c);
        }
    }
}