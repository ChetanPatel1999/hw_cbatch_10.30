// example of compound assignment operator
#include <stdio.h>
void main()
{
    int a = 23, b = 5;
    printf("value of a = %d\n", a);   // 12
    printf("value of b = %d\n\n", b); // 5
    // a += b;    // a = a + b;
    // a -= b;
    // a *= b;
    // b += a;
    // a += 10;
    // b *= 3;
    // a %= b;
    a %= b;
    printf("value of a = %d\n", a); // 22
    printf("value of b = %d\n", b); // 5
}