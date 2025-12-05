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
    struct mouse m[3];
    int i;
    for (i = 0; i < 3; i++) // 2
    {
        printf("enter mouse%d info : \n", i + 1);
        printf("enter mouse color : ");
        scanf("%s", m[i].color);
        printf("enter mouse price : ");
        scanf("%d", &m[i].price);
        printf("enter mouse rating : ");
        scanf("%f", &m[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nmouse%d info : \n", i + 1);
        printf("mouse color : %s\n", m[i].color);
        printf("mouse price : %d\n", m[i].price);
        printf("mouse rating : %.1f\n", m[i].rating);
        printf("----------------------------------\n\n");
    }
}