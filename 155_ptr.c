// when we increase pointer value  by one so its increase
// by 4 if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr = &a;

    printf(" a = %d\n", a);
    printf(" &a = %d\n", &a);
    printf(" ptr = %d\n", ptr);

    // ptr++;
    ptr = ptr + 1;

    printf(" &a = %d\n", &a);
    printf(" ptr = %d\n", ptr);
}