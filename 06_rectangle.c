// wap to calculate area of reactangle.
#include <stdio.h>
void main()
{
    float length, width, area;
    printf("enter length : ");
    scanf("%f", &length);
    printf("enter width : ");
    scanf("%f", &width);
    area = length * width;
    printf("reactangle area = %.2f", area);
}