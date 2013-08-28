#include <stdio.h>

int main(int argc, const char *argv[])
{
	int count = 0,i;
	for(i = 1; i <= 10; i++)
	{
       if((i % 2) == 0) {
		   count++;
		   printf("%d  ", i);
	   }
		   else
			   continue;
	}
	printf("\n");
	printf("count = %d\n", count);

	return 0;
}
