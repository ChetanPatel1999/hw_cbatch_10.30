// wap to convert sting in upercase.
#include <stdio.h>
void main()
{

    char name[] = "chetan patel";
    int i;
    printf("name = %s\n", name);

    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] != 32)
        {
            name[i] = name[i] - 32;
        }
    }

    printf("name = %s\n", name);
}