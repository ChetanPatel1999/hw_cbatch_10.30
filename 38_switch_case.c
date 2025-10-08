// Write a program using switch-case to print your friend's name based on the
//  first letter of their name.
#include <stdio.h>
void main()
{
    char frist_later;
    printf("enter your friend name frist later : ");
    scanf("%c", &frist_later);//t
    switch (frist_later)
    {
    case 'a':
        printf("ashvini mandloi");
        break;
    case 'n':
        printf("nikita pal");
        break;
    case 'd':
        printf("dipika moraniya");
        break;
    case 'k':
        printf("kamanshi vani");
        break;
    default:
        printf("no such a friend which name start with %c ", frist_later);
    }
}