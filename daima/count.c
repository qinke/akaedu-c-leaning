#include <stdio.h>

void print_count(int n)
{
   printf("t m inus %d and counting\n", n);
}

int main(int argc, const char*argv[])
{
	int i;

	for(i = 10; i > 0; i--)
		print_count(i);

		return 0;
}

