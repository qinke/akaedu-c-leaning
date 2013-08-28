//查看一个十进制数转换为二进制之后中有多少个1
#include <stdio.h>
int main(void)
{
	int count = 0, num;
	scanf("%d", &num);
	while (num)
	{
		count++;
		num = num & num - 1; // 0011 & 0010 = 0010
	}
	printf("%d\n", count);

	return 0;
}
