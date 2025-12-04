// strcpy() :- its copy one string into another variable
#include <stdio.h>
#include <string.h>
void main()
{
    // char color1[] = "RED";
    // char color2[10];
    // printf("color1 = %s\n", color1);
    // printf("color2 = %s\n", color2);
    // strcpy(color2, color1);
    // printf("color1 = %s\n", color1);
    // printf("color2 = %s\n", color2);

    char color[15];
    strcpy(color, "black");
    printf("color = %s\n", color);
}