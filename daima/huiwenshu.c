#include <stdio.h>
#include <string.h>

int loop(char *str)
{
	int i, j;

	for(i = 0, j = strlen(str) - 1; i <= j; i++, j--)
	{
		if(str[i] != str[j])
			return 0;
	}
	return 1;
}

int main(int argc, const char *argv[])
{
	char str[100];

	printf("please input a string: ");
	scanf("%s", str);

	if(loop(str))
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}
