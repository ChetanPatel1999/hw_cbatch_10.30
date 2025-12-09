// fgets():- its read one line form file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[50];
    ptr = fopen("facto.txt", "r");
    fgets(data, 50, ptr);
    printf("%s", data);
    fclose(ptr);
}