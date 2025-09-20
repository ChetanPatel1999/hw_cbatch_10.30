// pre post increament
#include <stdio.h>
void main()
{
    int a = 12, b;
    // b = ++a;               // pre-increamnet = frist increase a value by 1  and then assign incresing value in b
    b = a++;               // post increament = frist a value assign in b then increase a value by one
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12
}