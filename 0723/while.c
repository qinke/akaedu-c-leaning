#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, len, num1, num2; 
	num1 = num2 = 0;
	char str[100] = "adfaerav awera 234 a";
	len = strlen(str);

	i = 0 ;		//语句1
	while (i < len)	//语句2
	{
		if (str[i] == 'a')
		{
			num1++;
		}
		else if (str[i] == 'e')
		{
			num2++;
		}
		i++;       //语句3
	}
	printf("%d a\n%d e\n", num1, num2);

	return 0;
}



