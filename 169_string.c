// how to take string from user
// gets() :- take string from user
// puts() :- display string on output screen
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter your name : ");
    gets(name);
    printf("name = %s\n", name);
    printf("name = ");
    puts(name);
    puts(name);
}