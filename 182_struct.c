#include <stdio.h>
#include <string.h>
struct mouse
{
    char color[20];
    int price;
    float rating;
};
void main()
{
    struct mouse m1, m2 = {"red", 700, 3.7}, m3;
    strcpy(m1.color, "black");
    m1.price = 500;
    m1.rating = 4.5;

    printf("mouse1 info : \n");
    printf("mouse color : %s\n", m1.color);
    printf("mouse price : %d\n", m1.price);
    printf("mouse rating : %.1f\n", m1.rating);
    printf("----------------------------------\n");
    printf("mouse2 info : \n");
    printf("mouse color : %s\n", m2.color);
    printf("mouse price : %d\n", m2.price);
    printf("mouse rating : %.1f\n", m2.rating);
}