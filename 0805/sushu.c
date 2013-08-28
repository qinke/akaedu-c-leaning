#include <stdio.h>

#define A 2
#define B 3
#define C 5
#define D 7

void is_prime(int str[],int n)
{
	int i,count = 0, m = 0;

	for (i = 1; i <= n; i++)
	{
		str[i] = i;
	}

	for (i = 2; i <= n; i++) {
		 if(str[i] == A)
			 printf("str[i] is a prime num! ,str[i] = %d\n",str[i]);
		if(str[i] == B)
			 printf("str[i] is a prime num! ,str[i] = %d\n",str[i]);
		if(str[i] == C)
			 printf("str[i] is a prime num! ,str[i] = %d\n",str[i]);
	    if(str[i] == D)
			 printf("str[i] is a prime num! ,str[i] = %d\n",str[i]);    
		if((str[i] % A != 0)&&(str[i] % B != 0)&&(str[i] % C != 0)&&(str[i] % D != 0))
		{
			printf("str[i] is a prime num!, str[i] = %d\n",str[i]);
			count++;
		}

	}
	printf("100 num has %d ge prime num! \n ", (count+4));
}
int main(void)
{
	int str[100];

	is_prime(str,100);

	return 0;
}
