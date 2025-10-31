// Keep taking marks from the user until they enter a mark greater than 100 (invalid), then stop.
#include <stdio.h>
void main()
{
    int marks;
    do
    {
        printf("enter marks : ");
        scanf("%d", &marks);
    } while (marks < 100);
    printf("exit from program!");
}