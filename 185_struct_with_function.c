#include <stdio.h>
#include <string.h>
struct mouseOfHPCompany
{
    char color[20];
    int price;
    float rating;
};
typedef struct mouseOfHPCompany mouse;
void find_200_above(mouse m[], int n)
{
    int c = 0, i;
    printf("mouese list which price above 200 :\n");
    for (i = 0; i < n; i++)//1
    {
        if (m[i].price > 200)
        {
            c++;
            printf("\nmouse%d info : \n", i + 1);
            printf("mouse color : %s\n", m[i].color);
            printf("mouse price : %d\n", m[i].price);
            printf("mouse rating : %.1f\n", m[i].rating);
            printf("----------------------------------\n\n");
        }
    }
    printf("total mouse which price above then 200 = %d", c);
}
void main()
{
    mouse m[3];
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

    find_200_above(m, 3);

}