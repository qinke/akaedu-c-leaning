#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char *str = "hello world";
	char *p = malloc(100), *q;
	q = p;
	while(*str) {
		*p++ = *str++;
	}
	*p = '\0';
	printf("%s\n", q);
	free(q);

	return 0; 
}
