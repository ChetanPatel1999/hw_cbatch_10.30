// wap to check voter is eligibel for casting vote or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age); // 9
    if (age >= 18)
    {
        printf("you can vote\n");
    }
    if (age < 18)
    {
        printf("you can not vote\n");
    }
}