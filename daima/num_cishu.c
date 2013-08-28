#include <stdio.h>
#include <string.h>

int parse(char *s, char c)
{
	int count = 0;

	while(*s)
	{
		if (*s++ == c)
			count++;
	}

	return count;
}

int main(int argc, const char *argv[])
{
	char str[100];
	char c;

	printf("please input a string ");
	fgets(str, 100, stdin);
	str[strlen(str) - 1] = '\0';
	printf("please input the char to count: ");
	scanf("%c", &c);
	printf("%d %c exists in %s\n", parse(str, c), c, str);

	return 0;
}
