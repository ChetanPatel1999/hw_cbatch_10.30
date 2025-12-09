// fputc():- its write single char in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch = 'K';
    ptr = fopen("student.txt", "a");
    fputc('H', ptr);
    fputc(65, ptr);
    fputc(ch, ptr);
    fclose(ptr);
}