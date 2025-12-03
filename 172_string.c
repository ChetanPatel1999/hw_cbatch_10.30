// wap to print reverse string without using built-in function.

#include <stdio.h>
void main()
{
    char str[30];
    printf("enter a string : ");
    gets(str); // nidhi
    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("reverse string :  ");
    for (i = c - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}