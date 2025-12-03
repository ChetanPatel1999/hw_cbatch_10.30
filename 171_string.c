// wap to printf syring length without using built-in function.

#include <stdio.h>
void main()
{
    char str[30];
    printf("enter a string : ");
    gets(str);
    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("string length = %d ", c);
}