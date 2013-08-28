#include <stdio.h>
union AA
{
	char a;
	int b;
	char c[8];
}item;

int main(void)
{
	printf("%d\n", sizeof(item));
	item.a = 'x';
	printf("%c\n", item.a);
	item.b = 97;
	printf("%d\n", item.b);
	printf("%c\n", item.a);
	return 0;
}
