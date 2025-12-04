// wap to print make a function which return string length.

#include <stdio.h>
int length(char ch[])
{
    int i, c = 0;
    for (i = 0; ch[i] != '\0'; i++) // 2
    {
        c++;
    }
    return c;
}
void main()
{
    char str[30] = "ramlal";
    printf("str length = %d\n", length(str));
    char color[] = "red";
    printf("color length = %d\n", length(color));
    char gmail[] = "abc123@gmail.com";
    printf("gamil length = %d\n", length(gmail));
}