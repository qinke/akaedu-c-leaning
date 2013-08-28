#include <stdio.h>
#include <string.h>
void sort_char(char str[], int n)
{
	int i, j;
	char tmp;
	for (i = 0; i < n; i++)
		for (j = 1; j < n-i; j++)
			if (str[j-1] > str[j])
			{
				tmp = str[j-1];
				str[j-1] = str[j];
				str[j] = tmp;
			}
	return;
}
int main(void)
{
	int len;
	char str[1024];
	scanf("%s", str);
	len = strlen(str);
	sort_char(str, len);
	printf("%s\n", str);
	return 0;
}
