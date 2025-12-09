// fputs():- its write one line in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "a");
    fputs("hello this is string", ptr);
    fclose(ptr);
}