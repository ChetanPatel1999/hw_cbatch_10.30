// wap to convert sting in upercase.
#include <stdio.h>
void upperCase(char ch[])
{
    int i;
    for (i = 0; ch[i] != '\0'; i++) // 6
    {
        if (ch[i] != 32)
        {
            ch[i] = ch[i] - 32;
        }
    }
}
void main()
{
    char name[] = "chetan patel";
    printf("name = %s\n", name);
    upperCase(name);
    printf("name = %s\n", name);
    char color[] = "blue";
    printf("color : %s\n", color);
    upperCase(color);
    printf("color : %s\n", color);
}