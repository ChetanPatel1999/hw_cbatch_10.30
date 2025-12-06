// wap to convert weight gram into kg.
enum data
{
    unit = 1000
};
#include <stdio.h>
void main()
{
    float kg, gram;
    printf("enter weight in gram : ");
    scanf("%f", &gram);
    kg = gram / unit;
    printf("weight in kg : %.3f kg", kg);
}