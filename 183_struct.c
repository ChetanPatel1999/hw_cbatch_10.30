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
    struct mouse m1, m2, m3;    
    printf("enter mouse1 info : \n");
    printf("enter mouse color : ");
    scanf("%s", m1.color);
    printf("enter mouse price : ");
    scanf("%d", &m1.price);
    printf("enter mouse rating : ");
    scanf("%f", &m1.rating);

    printf("enter mouse2 info : \n");
    printf("enter mouse color : ");
    scanf("%s", m2.color);
    printf("enter mouse price : ");
    scanf("%d", &m2.price);
    printf("enter mouse rating : ");
    scanf("%f", &m2.rating);

    printf("\nmouse1 info : \n");
    printf("mouse color : %s\n", m1.color);
    printf("mouse price : %d\n", m1.price);
    printf("mouse rating : %.1f\n", m1.rating);
    printf("----------------------------------\n");
    printf("mouse2 info : \n");
    printf("mouse color : %s\n", m2.color);
    printf("mouse price : %d\n", m2.price);
    printf("mouse rating : %.1f\n", m2.rating);
}