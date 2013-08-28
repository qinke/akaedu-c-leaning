#include <stdio.h>

/*union int_short
{
	int a;
	short b[2];
}item;

int main(void)
{
   item.a = 0x12345678;
   printf("%hx %hx\n",item.b[0],item.b[1]);

   return 0;
}*/     //将一个int型数据转换成两个short型

/*union aa
{
	int a;
	char b[4];
}item;

int main(void)
{
	item.a = 0x12345678;
	printf("%hhx\n",item.b[0]);
	printf("%hhx\n",item.b[1]);
	printf("%hhx\n",item.b[2]);
	printf("%hhx\n",item.b[3]);
	return 0;
}*/   //查看是小端输入法还是大端输入法
