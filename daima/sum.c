#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 1, sum = 0;

	while(i <= 100)
	{
      sum += i;
	  i++;
	}

	printf("1+2+3+4+....+100 = %d\n", sum);

	return 0;
}
