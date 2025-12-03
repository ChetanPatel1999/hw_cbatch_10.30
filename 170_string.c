// how to take string from user
// fgets() :- take string from user
// fputs() :- display string on output screen
#include <stdio.h>
void main()
{
    char name[15];
    printf("enter your name : ");
    fgets(name, 15, stdin);
    printf("name = %s\n", name);
    printf("name = ");
    fputs(name,stdout);
}