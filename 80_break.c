#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 6
    {
        break; //dircatly break inside loop working but its not have any uses.
        printf("%d\n", i);
    }
}