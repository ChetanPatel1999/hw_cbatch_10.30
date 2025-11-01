// wap to search a number in given table.
#include <stdio.h>
void main()
{
    int tableNum, serachNum, i, f = 0;
    printf("enter num for table : ");
    scanf("%d", &tableNum); // 6
    printf("enter search num : ");
    scanf("%d", &serachNum); // 12
    for (i = 1; i <= 10; i++)
    {
        if (tableNum * i == serachNum)
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}