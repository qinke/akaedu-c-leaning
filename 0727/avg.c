#include <stdio.h>
int c;		//未初始化的全局变量编译器默认初始化成0
int d = 5;	
static int g;	//?
int main(void)
{
	int a;
	int b = 4;
	static int e;		//?
	static int f = 7;	
	/*
0xbff7120c	a = 2514932
0xbff71208	b = 4
0x804a02c	c = 0
0x804a014	d = 5
0x804a028	e = 0
0x804a018	f = 7
0x804a024	g = 0
*/
	printf("%p\ta = %d\n", &a, a);	
	printf("%p\tb = %d\n", &b, b);	
	printf("%p\tc = %d\n", &c, c);	
	printf("%p\td = %d\n", &d, d);	
	printf("%p\te = %d\n", &e, e);	
	printf("%p\tf = %d\n", &f, f);	
	printf("%p\tg = %d\n", &g, g);	

	return 0;
}
