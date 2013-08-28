//编写程序实现以下功能，在字符串str中找出最大的字符并放在第一个位置上，并将该字符前的原字符往后顺序移动，如str字符串内容为“chyab”,程序执行完毕，str中的内容为“ychab”.
#include <stdio.h>
#include <string.h>

char *max_char(char str[])
{
	int i, len, max = 0;
	char max_ch= str[0];
	len = strlen(str);
	for (i = 0; i < len-1; i++)
		if (str[i] > max_ch)
		{
			max = i;
			max_ch = str[max];
		}
	for (i = max; i > 0; i--)
		str[i] = str[i-1];
	str[0] = max_ch;
	return str;
}
int main(void)
{
	char str[1024];
	scanf("%s", str);
	max_char(str);
	printf("%s\n", str);
	return 0;
}
