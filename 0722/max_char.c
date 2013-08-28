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
