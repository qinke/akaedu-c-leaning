#include <stdio.h>

int six_ten(char a[])
{
	int i,n,res = 0;

	for(i = 0; a[i] != '\0'; i++)
		;
	n = --i;

	for(; i >= 0; i--)
	{
		if(a[i] >= 'A'&& a[i] <= 'F')
		{
			res = res +(a[i]-'A'+ 10 ) * (1 <<((n - i)*4));
		}
		else
		{
			res = res +(a[i]-'0') * (1 <<((n - i)*4));
		}
	}
	return res;
}
int main(void)
{
	char a[10];
	int dec;
	printf("please input 16 jinzhishu:\n");

	scanf("%s",a);
	dec = six_ten(a);
	printf("10 jinzhi wei:\n%d\n",dec);
	return 0;
}
