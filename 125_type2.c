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

void main()
{
    greatestNum(12, 67);
    greatestNum(500, 56);
    // circleArea(4.5);
    // cube(3);
    // cube(2);
    // addition(12, 8);
    // addition(5, 8);
    // addition(100, 34);
}