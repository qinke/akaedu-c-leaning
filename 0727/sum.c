#include <stdio.h>

int foctoral(int n)
{
	if(n==1)
		return 1;
		return n + foctoral(n-1);
}
int main(void)
{
	int res;
	res = foctoral(100);
	printf("100 num sum is : %d\n",res);
	return 0;
}
