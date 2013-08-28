#include <stdio.h>

#define LEN 20

int main(int argc, const char *argv[])
{
	char str[LEN], c;
	int i, count = 0;

	scanf("%s %c", str, &c);

	for(i = 0; str[i]; i++)
		if (str[i] == c)
			count++;

	printf("find %d %c in %s\n", count, c, str);

	return 0;
}
