#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, len;
	char str[1024];
	scanf("%s", str);
	//len = strlen(str);

	for (i = 0; str[i] != '\0'; i++)
		printf("%c\n", str[i]);

	return 0;
}
