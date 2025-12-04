// strcat() :- its combine two string and assign in one varaible
#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "raj";
    char sirName[] = " sharma";

    strcat(name, sirName);

    printf("full name = %s", name);
}