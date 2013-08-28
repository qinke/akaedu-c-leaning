#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,len;
	char *str="hello";
	printf("%p\n",str);
	str[0]='H';
	return 0;
}
