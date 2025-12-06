// Definition
//  typedef (type definition) is a keyword in C used to create an alias (new name) for an
// existing data type.
//  It does not create a new data type, it just gives a shortcut / easy name to an existing type.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
void main()
{
    lli a;
    char ch;
    ld d;
    printf("size of long long int = %d \n", sizeof(a));
    printf("size of char = %d \n", sizeof(ch));
    printf("size of long double = %d \n", sizeof(d));
}