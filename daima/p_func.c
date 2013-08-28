#include <stdio.h>

void say_hello(char *str)
{
    printf("hello, %s\n", str);

    return;
}

int main(void)
{
    void(*f)(char *);
    //void (*)(char *) f;
    
    f = say_hello;

 //   say_hello("akaedu");
    f("akaedu");

    return 0;
}
