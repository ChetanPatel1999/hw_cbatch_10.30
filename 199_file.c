// fscanf():- its resd data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[30];
    ptr = fopen("facto.txt", "r");
    fscanf(ptr, "%s", data);
    printf("%s", data);

    fscanf(ptr, "%s", data);
    printf("%s", data);
    fclose(ptr);
}