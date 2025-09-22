// wap to take two amount from user and check bothe ammount are same or different.
#include <stdio.h>
void main()
{
    int kamanshiAmount, nikitaAmount;
    printf("enter ammount kamanshi : ");
    scanf("%d", &kamanshiAmount);
    printf("enter ammount nikita : ");
    scanf("%d", &nikitaAmount);
    kamanshiAmount == nikitaAmount ? printf("both have same ammount") : printf("both have different amount");
}