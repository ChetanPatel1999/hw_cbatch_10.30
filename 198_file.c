#include <stdio.h>
#include <string.h>
void main()
{
    FILE *ptr;
    ptr = fopen("student.txt", "a");
    char name[20];
    printf("enter name : ");
    scanf("%s", name);
    strcat(name, "\n");
    fprintf(ptr, name);
    fclose(ptr);
}