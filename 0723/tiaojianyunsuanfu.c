#include <stdio.h>
int main(void)
{
	int a=3,b=4,c=5,d=6;
	// a>b?a:c>d?c:d
	if(a>b)
		printf("a\n");
	else
	{
		if(c>d)
			printf("c\n");
		else
			printf("d\n");
	}
	return 0;
}
