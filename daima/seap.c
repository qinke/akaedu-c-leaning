#include <stdio.h>

void swap_fir(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void swap_sec(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 3, b = 4;

	printf("a = %d, b = %d\n\n", a, b);

	swap_fir(a, b);
	printf("after swap_fir...\n\n");
	printf("a = %d, b = %d\n\n", a, b);

	a = 3, b = 4;

    printf("again: a = %d, b = %d\n\n", a, b);
	swap_sec(&a, &b);
	printf("after swap_sec...\n\n");
	printf("a = %d, b = %d\n\n", a, b);

	return 0;
}
