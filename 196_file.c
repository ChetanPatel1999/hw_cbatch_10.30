// "a" :- its insert new data without delete privious data
#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("abc.txt", "a");
    fprintf(fp, "this is text file\n");
    fprintf(fp, "this is second text inside file\n");
    fclose(fp);
}