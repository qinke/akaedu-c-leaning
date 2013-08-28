#include <stdio.h>

char *mystrtok(char *str, const char *delim)
{
	static char *p = NULL;
	const char *q = delim;
	char *res;
	int i;

	if(str != NULL)
		p = str;
	if(p == NULL || q == NULL)
		return NULL;
	i = 0;
	while(*p) {
		q = delim;
		while(*q) {
			if (*q == *p) {
				*p = '\0';
				return p++ - i;
			}
			q++;
		}
		p++;
		i++;
	}
	if(*p == '\0') {
		res = p;
		p = NULL;
		return res - i;
	}
}

int main(void)
{
	char str[100] = "he:kl;;fjgh:fjhg; fdfjg:gfklgj";
	char *p;

	printf("%s\n", mystrtok(str, ";:"));
	while(p = mystrtok(NULL, ";:"));
	printf("%s\n", p);

	return 0;
}

