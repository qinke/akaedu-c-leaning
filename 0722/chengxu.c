#include <stdio.h>
#include <string.h>
int myatoi(char str[])
{
	int i, len, res = 0;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		//"1234"
		res += (str[i]-'0');
		res *= 10;
	}
	res /= 10;
	return res;
}
int main(void)
{
	char str[100];
	int res;
	scanf("%s", str);
	res = myatoi(str);
	printf("%d\n", res);
}
