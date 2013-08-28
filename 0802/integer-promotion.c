#include <stdio.h>

int main(void)
{

	unsigned char c = 0xfc;
//	char c = 0xfc;
//	char c = 0x8c;
	unsigned int i = ~c;
//    int d = c;

	printf("demo promotion!\n");

	printf("c = 0x%x, i = 0x%x\n ", c, i);
//    printf("d= 0x%d\n",d);

	return 0;
}
