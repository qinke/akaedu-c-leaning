#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i,j,k;
	int n;

	while(scanf("%d",&n))
	{
		if(n & 1)
			break;
		k = n / 2;

		for(i = -k; i <= k; i++)
		{
			if(i < 0)
			{
		     	for(j = 0; j < i+k+1; j++)
				printf("*");
	      	}
	     	else 
	      	{
		    	for(j = 0; j < -i+k+1; j++)
				printf("*");
	     	}
		printf("\n");
		}
	}
	
	return 0;
}
