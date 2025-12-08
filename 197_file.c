#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("facto.txt", "a");
    int fact = 1, i, num;
    printf("enter a num : ");
    scanf("%d", &num); // 4
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("factorial of %d = %d\n", num, fact);
    fprintf(ptr, "factorial of %d = %d\n", num, fact);
    fclose(ptr);
}