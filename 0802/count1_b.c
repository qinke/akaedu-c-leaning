#include <stdio.h>

int count_bit_1(int n)
{
  int count = 0;
  if(n == 0)
	  return 0;
	  while(n) {
		  n = n & (n - 1);
		  count++;
	  }

	  return count;
}

int main(void)
{
	int num;

	printf("please input a num : ");
	scanf("%d",&num);
	printf("num in hex is 0x%x\n",num);

	printf("bit 1 has %d ge\n",count_bit_1(num));

	return 0;
}
