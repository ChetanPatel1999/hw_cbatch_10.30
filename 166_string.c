// wap to replace all vovel with emoji.
#include <stdio.h>
void main()
{

    char name[] = "chetan patel";
    int i, c = 0;
    printf("name = %s\n", name);

    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            name[i] = 1;
            c++;
        }
    }
   
    printf("name = %s\n", name);
    printf("total vovel  = %d\n", c);
}