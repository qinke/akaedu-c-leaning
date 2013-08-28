#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int i;
	char *q;
	char *p = malloc(1);
	*p = 'a';
	for(i = 1; i <= 10; i++) {
		p = realloc(p, i+1);
		*(p+i) = *(p+i-1) + 1;
	}
	p = realloc(p, i+1);
	*(p+i) = '\0';
	printf("%s\n", p);

	free(p);

	return 0;
}
