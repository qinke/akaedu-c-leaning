#include <stdio.h>

int main(void)
{
    int *p = 0x8058155;//代码段
  //void *p = 100;
   int a = 0x8048000;

    printf("demo pointer definition \n");
    printf("p = 0x%x\n",(int)p);
    printf("*p = 0x%x\n", *p);//第一种方法
	printf("*(p+1) = 0x%x\n",*(p+1));
	printf("*a = 0x%x\n",*(int *)a);//第二种方法
	printf("0x8048000  = 0x%x\n",*(int *)0x8048000);//第三种方法
	return 0;

    printf("a = 0x%x\n", a);
	printf("(int *)a = 0x%x\n",(int *)a);
	printf("(int *)a+1 = 0x%x\n",(int *)a+1);
	printf("(int *)a-1 = 0x%x\n",(int *)a-1);

 // printf("(int *)a*2 = 0x%x\n",(int *)a*2);

	printf("p = %p\n", p);//当取指针中的内容时，不能使用%p来打印输出，只能用%x来打印输出
	printf("p = 0x%x\n", (int) p);
    printf("p+1 = 0x%x\n",(int)p+1);//这样是把P看成一个整型数，可以直接进行运算
	printf("p+1 = 0x%x\n", p+1);//指针p+1表示指针P+一个单元（int 占4个字节），指针不能随便进行算术运算

	printf("p-1 = 0x%x\n", p-1);
	printf("p-1 = 0x%x\n", (int)p-1);
	printf("p*2 = 0x%x\n",(int)p*2);
    printf("p/2 = 0x%x\n",(int)p/2);
//  printf("p*2 = 0x%x\n",p*2);
   

   //指针和整型数之间可以强制转换

	return 0;
}
