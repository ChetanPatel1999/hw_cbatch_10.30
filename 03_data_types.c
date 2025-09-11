// formate specifire %d is used for integer value
// formate specifire %f is used for float value
// formate specifire %c is used for character value
#include <stdio.h>
void main()
{
    char gread;
    int age;
    float height;
    printf("enter gread : ");
    scanf("%c", &gread);
    printf("enter age : ");
    scanf("%d", &age); // 23
    printf("enter height : ");
    scanf("%f", &height);
    printf("person gread : %c\n", gread);
    printf("person age = %d year\n", age);
    printf("height of person = %.1f", height);
}