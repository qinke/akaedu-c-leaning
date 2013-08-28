#include <stdio.h>

int prime(int a)
{
	int num[100] = {2};
	int i, j, k = 0, l = 0;	

	printf("%d\t", num[0]);
	for(j = 3; j < a; j++)
	{
		for(i = 0; i < k+1; i++)
			if(j % num[i] != 0)
				l++	;
		if(l == k + 1)
		{
			l = 0;
			k++;
			num[k] = j;
			printf("%d\t",j);
		}
		else
			l = 0;
	}
	printf("\n");
	return 0;
}
int main(void)
{
	int a;
	printf("plase input the NO.:\n");
	scanf("%d", &a);
	prime(a);

	return 0;
}
