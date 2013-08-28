#include <stdio.h>
/*
union 
{
	int b;
	short a[2];
}item;
int main(void)
{
	item.b = 0x12345678;
	printf("%hx\n", item.a[0]);
	printf("%hx\n", item.a[1]);
	return 0;
}
*/
/*
union 
{
	int b;
	char a[4];
}item;
int main(void)
{
	item.b = 0x12345678;
	printf("%hhx\n", item.a[0]);
	printf("%hhx\n", item.a[1]);
	printf("%hhx\n", item.a[2]);
	printf("%hhx\n", item.a[3]);
	return 0;
}
*/

int main(void)
{
	printf("%d\n", 12);
	printf("%hd\n", 12);
	return 0;
}
foo(0x12345678);
void foo(int a)
{
	printf("%d", a);
}
void foo(short b)
{
	printf("%hd", b);
}
