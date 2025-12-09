// fgetc() :- its resd from file single char
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("student.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(ptr);
}