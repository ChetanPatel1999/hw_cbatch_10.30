// with return type , with parameter
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int cube(int num)
{
    return num * num * num;
}

float circleArea(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    return area;
}

int greatestNum(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
void main()
{
    printf("res = %d", greatestNum(478, 90));
    // printf("res = %.2f", circleArea(4));
    // printf("res = %d", cube(4));
}