// strcmp() :- its compare two string and check string are same or different
// when same string return 0
// when different string return 1
#include <stdio.h>
#include <string.h>
void main()
{
    char color1[] = "red";
    char color2[] = "blue";

    if (strcmp(color1, color2) == 0)
    {
        printf("color are same");
    }
    else
    {
        printf("color are different");
    }
}