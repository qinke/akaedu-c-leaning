#include <stdio.h>

#define  FOO	while(5>3){printf("aaa\n");}
#define  foo   do{printf("aaa\n");}while(5>3)
int main(void)
{
	int i;

	if (5 > 2)
		foo;
	//	FOO
	else
		printf("bbb\n");

	return 0;
}
