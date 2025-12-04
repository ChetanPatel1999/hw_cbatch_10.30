// strlwr() :- its convert string into lower case alphabet
#include <stdio.h>
#include <string.h>
void main()
{
    char color[] = "RED";
    printf("color = %s\n", color);
    strlwr(color);
    printf("color = %s\n", color);
}