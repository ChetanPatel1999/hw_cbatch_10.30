#include <stdio.h>
void demo()
{
    printf("hi i am demo\n");
}
void fun()
{
    demo();
    printf("hello i am fun\n");
}
void game()
{
    printf("hi i am game\n");
    fun();
    printf("game fun is end\n");
}
void main()
{
    printf("main fun is start\n");
    game();
    printf("main fun is end");
}