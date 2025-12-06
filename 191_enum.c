#include <stdio.h>
enum Weeks
{
    MON=12,TUE=78,WED=5,THU,FRI,SAT,SUN
};
void main()
{
    printf("MON: %d\n", MON); // 0
    printf("TUE: %d\n", TUE); // 1
    printf("WED: %d\n", WED); // 2
    printf("THU: %d\n", THU); // 3
    printf("FRI: %d\n", FRI); // 4
    printf("SAT: %d\n", SAT); // 5
    printf("SUN: %d\n", SUN); // 6
}