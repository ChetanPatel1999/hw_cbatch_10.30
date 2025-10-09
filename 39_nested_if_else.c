//  Mini Project Task:
// Create a program that simulates entry into a club and ordering food/drinks
// using nested if-else statements.
// Requirements:
// Age Check:
// o Ask the user for their age.
// o If the age is less than 18, display a message: "Sorry, you are not
// allowed to enter the club." and stop the program.
// o If the age is 18 or older, allow them to enter the club.
// Menu Display:
// o Show 2–3 menu items (for example: Pizza, Burger, Cold Drink) with
// their prices.
// Order Process:
// o Allow the user to order only one item by entering its number/name.
// Bill Display:
// o Show the name of the ordered item and its price as the bill.

#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
        printf("club menue : \n");
        printf("1. pizza : 250\n");
        printf("2. cold drink : 100\n");
        printf("3. burger : 50\n");
        printf("please order : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your pizza is orderd please pay 250 rs\n");
        }
        else if (order == 2)
        {
            printf("your cold drink is orderd please pay 100 rs\n");
        }
        else if (order == 3)
        {
            printf("your burger is orderd please pay 50 rs\n");
        }
        else
        {
            printf("you choose wrong number\n");
        }
    }
    else
    {
        printf("sorry you are not allowed in club try after %d year\n", 18 - age);
    }
    printf("-----------------------------------------\n");
    printf("thanks for visiting my club %c", 2);
}