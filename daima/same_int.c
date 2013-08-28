#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n, digit[10] = {0};

	printf("input a number: ");
	scanf("%d", &n);

	while(n)
	{
		if(digit[n % 10] == 1)
			break;
		else
			digit[n % 10] = 1;
		n /= 10;
	}

	if(n)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
