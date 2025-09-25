// Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); // i
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("alpha is vovel");
    }
    else
    {
        printf("alpha is consonent");
    }
}