// strupr() :- its convert string into uper case
#include <stdio.h>
#include <string.h>
void main()
{
    char color[] = "red";
    printf("color = %s\n", color);
    strupr(color);
    printf("color = %s\n", color);
}