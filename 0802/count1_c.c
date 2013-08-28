#include <stdio.h>

typedef unsigned int U32;
const U32 A = 0x55555555;
const U32 B = 0x33333333;
const U32 C = 0x0f0f0f0f;
const U32 D = 0x00ff00ff;
const U32 E = 0x0000ffff;

int count_bit_1(unsigned int num)
{
	num = (num & A) + ((num>>1) & A);
	num = (num & B) + ((num>>2) & B);
	num = (num & C) + ((num>>4) & C);
	num = (num & D) + ((num>>8) & D);
	num = (num & E) + ((num>>16) & E);

	return num;
}

int main(void)
{
	int num;

	printf("please input a number: ");
	scanf("%d", &num);
	printf("number in hex is 0x%x\n",num);

	printf("bit 1 has %d ge \n",count_bit_1(num));

	return 0;
}
