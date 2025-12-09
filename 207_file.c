// fgetc() :- its resd from file single char
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    printf("position of pointer = %d\n", ftell(ptr)); // its return current position of pointer.
    fseek(ptr, 15, SEEK_SET);                         // its set pointer position in file
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("position of pointer = %d\n", ftell(ptr));
    printf("\n\n");
    // fseek(ptr,0,SEEK_SET);
    rewind(ptr); //  its set pointer a the beagining of the file.
    printf("position of pointer = %d\n", ftell(ptr));
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