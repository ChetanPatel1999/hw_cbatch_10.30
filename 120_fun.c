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
void main()
{
    printf("hi i am main function\n");
    addition(); 
    addition();
    printf("main function is end");
}
