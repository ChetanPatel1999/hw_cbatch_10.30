#include <stdio.h>
void main()
{
    int age, order, more, totalbill = 0, pizaCount = 0;
    int coldDrinkCount = 0, burgerCount = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
        do
        {
            printf("club menue : \n");
            printf("1. pizza : 250\n");
            printf("2. cold drink : 100\n");
            printf("3. burger : 50\n");
            printf("please order : ");
            scanf("%d", &order);
            if (order == 1)
            {
                
                printf("your pizza is orderd\n");
                totalbill = totalbill + 250;
                pizaCount++;
            }
            else if (order == 2)
            {
                printf("your cold drink is orderd\n");
                totalbill = totalbill + 100;
                coldDrinkCount++;
            }
            else if (order == 3)
            {
                printf("your burger is orderd\n");
                totalbill = totalbill + 50;
                burgerCount++;
            }
            else
            {
                printf("you choose wrong number\n");
            }
            printf("you want to order more item press 1 : ");
            scanf("%d", &more);
        } while (more == 1);
        printf("\n\n<-------------------------your bill sir/mem------------------->\n");
        printf("   item             price            itemcount       total\n");
        printf("   piza              250               %d              %d\n", pizaCount, pizaCount * 250);
        printf("   cold drink        100               %d              %d\n", coldDrinkCount, coldDrinkCount * 100);
        printf("   burger            50                %d              %d\n", burgerCount, burgerCount * 50);
        printf("---------------------------------------------------------------\n");
        printf("                        total bill = %d\n", totalbill);
    }
    else
    {
        printf("       sorry you are not allowed in club try after %d year\n", 18 - age);
    }
    printf("---------------------------------------------------------------\n");
    printf("                  thanks for visiting my club %c", 2);
}