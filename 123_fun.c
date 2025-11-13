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
void multiplication()
{
    printf("this is multiplication  function\n");
    int a, b, c;
    printf("enter frist num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication = %d\n", c);
}
void division()
{
    printf("this is division  function\n");
    int a, b, c;
    printf("enter frist num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a / b;
    printf("division = %d\n", c);
}
void main()
{
    int num;
    printf("<---------- welcome to my calculator -------->\n");
    printf("    1. addition \n");
    printf("    2. subtraction \n");
    printf("    3. multiplication \n");
    printf("    4. division \n");
    printf("    select operation :-  ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    default:
        printf("please enter 1 to 4");
        break;
    }
}
