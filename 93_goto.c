// wap to print table using goto stmnt
#include <stdio.h>
void main()
{
    int num, i = 1;
    printf("enter a num : ");
    scanf("%d", &num);//7
st:
    printf("%d\n", num * i);
    i++;//4
    if (i <= 10)
    {
        goto st;
    }
}