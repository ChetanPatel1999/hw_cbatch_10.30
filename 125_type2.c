// no return type, with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}
void cube(int num)
{
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void circleArea(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f", area);
}

void greatestNum(int n1, int n2)
{
    if (n1 > n2)
    {
        printf("greatest num = %d\n", n1);
    }
    else
    {
        printf("greatest num = %d\n", n2);
    }
}
void factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        factorial(i);
    }
    printf("-----------------------\n");
}
void main()
{

    range(3, 8);
    range(1, 5);
    // factorial(4);
    // factorial(7);
    // greatestNum(12, 67);
    // greatestNum(500, 56);
    // circleArea(4.5);
    // cube(3);
    // cube(2);
    // addition(12, 8);
    // addition(5, 8);
    // addition(100, 34);
}