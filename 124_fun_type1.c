// no return type, no parameter
#include <stdio.h>
void addition()
{
    printf("this is addition function\n");
    int a, b, c;
    printf("enter frist num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void cube()
{
    int num, res;
    printf("enter  a num : ");
    scanf("%d", &num);
    res = num * num * num;
    printf("cube of %d = %d", num, res);
}

void circleArea()
{
    float radius, area;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f", area);
}
void greatestNum()
{
    int n1, n2;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("greatest num = %d", n1);
    }
    else
    {
        printf("greatest num = %d", n2);
    }
}

void factorial()
{
    int num, fact = 1, i;
    printf("enter a num : ");
    scanf("%d", &num); // 4
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
}
void main()
{
    factorial();
    // greatestNum();
    // circleArea();
    // cube();
    // addition();
}