#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, len, num1, num2; 
	num1 = num2 = 0;
	char str[100] = "adfaerav awera 234 a";
	len = strlen(str);

	for (i = 0 ; i < len; i++ )
	{
		if (str[i] == 'a')
		{
			num1++;
			continue;
		}
		if (str[i] == 'e')
		{
			num2++;
			continue;
		}
	}
	printf("%d a\n%d e\n", num1, num2);

	return 0;
}



