#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 8 && 67 > 12 && 91 == 9;
    // ans = 12 > 7 || 7 == 8;
    // ans = !(12 > 7);
    ans = 12 > 8 && !(8 == 9);
    ans = !(34 == 8 && 7 == 9);
    printf("ans = %d", ans);
}