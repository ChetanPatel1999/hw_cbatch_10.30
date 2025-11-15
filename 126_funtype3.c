// with return type , with parameter
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = addition(2, 7);
    printf("res = %d\n", res);

    printf("addition = %d\n", addition(12, 18));
    
    printf("sum of a and b = %d\n", addition(4, 8));
}