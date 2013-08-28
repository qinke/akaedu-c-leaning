#include <stdio.h>

char *mystrtok(char *str, const char *delim)
{
#if 0
	static char *s;
	s = str;
	static char *p;
	static char *save;
	int i = 0, j = 0;
	int m = 0;

	for(i = 0; *s; i++) {
		for(j = 0; *p; j++) {
			if (str[i] == delim[j]) {
				str[i] = '\0';
				save = &str[i];
				return str;
			}
		}
	}
#endif

	static char *p = NULL;
	const char *q = delim;
	char *res;
	int i;

	if(str != NULL)
		p = str;
	if(p == NULL || q == NULL)
		return  NULL;
	i = 0;
	while(*p) {
		q = delim;
		while(*q) {
			if(*q == *p  ) {
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
	char str[100] = "hel:kl ;;;;;;::::: djkf; dk:fj; jgh; fdg";
	char *p ;

	printf("%s\n", mystrtok(str, ";:"));
	while(p = mystrtok(NULL, ";:"))
		printf("%s\n", p);

	return 0;
}
