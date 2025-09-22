// wap to take a number from userand check num is positive or nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter  a num : ");
    scanf("%d", &num); // 0
    num >= 0 ? printf("num is positive") : printf("num is nagative");
}