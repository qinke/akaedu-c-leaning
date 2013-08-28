#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "hello world";
	char *p = malloc(100), *q;
	q = p;
	while(*str)
		*p++ = *str++;
	*p = '\0';
	printf("%s\n", q);
	free(q);
	//  free(p+4);
	//  free(p);
	return 0;
}
