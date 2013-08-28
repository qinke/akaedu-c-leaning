#include <stdio.h>
int main(void)
{
	int i,j,k,n;
	char c='*';
	printf("n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//主循环，控制要打印的层数，n为总层数，i为层数控制变量
	{
		for(j=1;j<n-i+1;j++)//第二层循环，控制*号前面要打印的空格，数量为n-i+1
		{
			printf(" ");
		}
			for(j=1;j<=i;j++)//第二层循环，控制要打印的*号数，数量为i
			{
			printf("%c ",c);
			}
			printf("\n");
	}
	return 0;
}
