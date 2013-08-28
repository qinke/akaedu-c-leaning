#include <stdio.h>
#include <stdlib.h>

void fun(void)
{
	static int i;
	printf("%d\n", i);
	i++;
}

int main(void)
{
	fun();
	fun();
	fun();

	return 0;
}
