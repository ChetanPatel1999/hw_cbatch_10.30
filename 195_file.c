// fprintf():- its used to write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\WIN\\Desktop\\ram\\hello.txt", "w");
    fprintf(ptr, "hello i am nidhi");
    fclose(ptr);
}