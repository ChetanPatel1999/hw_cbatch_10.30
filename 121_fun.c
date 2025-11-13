#include <stdio.h>
void addition()
{
    printf("this is addition function\n");
    int a, b, c;
    printf("enter frist num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void subtraction()
{
    printf("this is subtraction  function\n");
    int a, b, c;
    printf("enter frist num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}
void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        addition();
    }
}
