// how to pass array in function
#include <stdio.h>
void main()
{
    int height[5] = {3, 7, 4, 8, 1};
    int sallary[8] = {3000, 6000, 12000, 500, 2000};
    int marks[10] = {30, 60, 10, 50, 20, 36, 78, 45, 25, 15};
    int max = height[0];
    int i;
    for (i = 0; i < 5; i++) // 5
    {
        if (max < height[i])
        {
            max = height[i];
        }
    }
    printf("max height = %d", max);

    max = sallary[0];
    for (i = 0; i < 8; i++) // 5
    {
        if (max < sallary[i])
        {
            max = sallary[i];
        }
    }
    printf("\nmax sallary = %d", max);

    max = marks[0];
    for (i = 0; i < 10; i++) // 5
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    printf("\nmax marks = %d", max);
}