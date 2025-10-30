#include <stdio.h>
void main()
{
    int num, totalSallary = 20000, distributedSallary = 0, sallary;
    printf("<----------sallary distribution app----------->\n");
    printf("           total sallary : %d rs\n", totalSallary);
    printf("-------------------------------------------------\n");
    do
    {
        printf("enter sallary : ");
        scanf("%d", &sallary);
        distributedSallary = distributedSallary + sallary;
        if (distributedSallary < totalSallary)
        {
            printf("\namount distributed succefully\n\n");
        }
        else
        {
            printf("\namount is not sufficint\n\n");
            distributedSallary = distributedSallary - sallary;
            printf("you have only %d rs\n\n", totalSallary - distributedSallary);
        }

        printf("more emp press 1 : ");
        scanf("%d", &num);
    } while (num == 1);
    printf("total distribute ammount := %d\n", distributedSallary);
    printf("total remaining ammount := %d\n", totalSallary - distributedSallary);
}