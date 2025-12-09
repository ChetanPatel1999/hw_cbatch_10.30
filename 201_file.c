// fgetc() :- its resd from file single char
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    ch = fgetc(ptr);
    printf("%c", ch);
    ch = fgetc(ptr);
    printf("%c", ch);
    fclose(ptr);
}