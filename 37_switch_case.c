//  Write a program to make simple calculator.
//       Press 1 to addition
//       Press 2 to subtraction
//       Press 3 to multiplication
//       Press 4 to division
#include <stdio.h>
void main()
{
    int num, a, b, c;
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
        printf("you select addition program --->\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a + b;
        printf("addition : %d\n", c);
        break;
    case 2:
        printf("you select subtraction program --->\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a - b;
        printf("subtraction : %d\n", c);
        break;
    case 3:
        printf("you select multiplication program --->\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a * b;
        printf("multiplication : %d\n", c);
        break;
    case 4:
        printf("you select division program --->\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("division : %d\n", c);
        break;
    default:
        printf("please enter 1 to 4");
        break;
    }
}