#include <stdio.h>

void say_hello( char *str)
{
    printf("hello %s\n", str);

    return;
}

typedef void (*FP)(char *);  //自定义为函数指针类型
typedef void FF(char *);  //自定义为函数类型
//wrong!!! typedef void (*)(char *)  ff; //可以这样理解函数指针，但是不能这样定义，或者直接使用
//这几种定义方式都是一样的效果

int main(void)
{
    void(*f)( char *);
    //void (*)(char *)  f;
    FP f2;
    FF * f3;
    int a;

    f = say_hello;
    f2 = say_hello;
    f3 = say_hello;
    printf("f = %p\n", f);
    printf("say_hello = %p\n", say_hello);

    f2("I am f2");
    f3("I am f3");
    //a = 0x8048400; //这个地址会导致程序进入到死循环中，不知道怎么从这个地址跳出
    a = 0x80483e4;
   ((void (*)(char *))a)("world"); //32和33行这两行表示的是一个意思：将函数或者变量变成函数指针，跳转到32行所表示的地址空间
     ((FP)0x80483e4)("world");
  
    ((FF *)0x80483e4)("world");
    f("Guys");
    return 0;
}
