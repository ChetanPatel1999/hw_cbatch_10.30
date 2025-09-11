// wap to add two float number.
#include <stdio.h>
void main()
{
    float a, b, c;
    printf("<---addition app--->\n");
    printf("enter frist num : ");
    scanf("%f", &a);
    printf("enter second num : ");
    scanf("%f", &b);
    c = a + b;
    printf("addition : %.1f", c);
}