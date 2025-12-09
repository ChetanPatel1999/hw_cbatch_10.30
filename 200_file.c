// fscanf():- its resd data from file
#include <stdio.h>
void main()
{
  FILE *ptr;
  char data[30];
  int stop;
  ptr = fopen("facto.txt", "r");
  while (1)
  {
    stop = fscanf(ptr, "%s", data);
    if (stop == EOF)
    {

      break;
    }
    printf("%s ", data);
  }
  fclose(ptr);
}