// union in c lanaguge
#include <stdio.h>
#include <string.h>
union mouse
{
    char color[8];
    int price;
    float rating;
};
void main()
{
    union mouse m1;
    printf("size of mouse m1:%d\n", sizeof(m1));

    m1.price = 500;

    m1.rating = 4.5;
    
    strcpy(m1.color, "black");

    printf("mouse1 info : \n");
    printf("mouse color : %s\n", m1.color);
    printf("mouse price : %d\n", m1.price);
    printf("mouse rating : %.1f\n", m1.rating);
}