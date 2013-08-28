#include <stdio.h>

void itoa(int num, char buf[])
{
	int i = 0;
	int j = 0;

	do {
		buf[i++] = num % 10 + '0';
		num /= 10;
	}while(num);
	buf[i] = '\0';

	for(j = 0, i--; j < i; j++, i--)
	{
		char tmp;

		tmp = buf[i];
		buf[i] = buf[j];
		buf[j] = tmp;
	}

	return ;
}

int main(void)
{
	int num;
	char buf[100];

	printf("please input a number:");
	scanf("%d", &num);

	itoa(num, buf);
	printf("number string = %s\n", buf);

	return 0;
}
