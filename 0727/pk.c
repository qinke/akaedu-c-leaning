#include<stdio.h>
#include<time.h>

int main(void)
{
	int i, j, k, m, res, pk[54];
	int p0[18],p1[18],p2[18];
	srand(time(NULL));
	for (i = 0; i < 54; i++)
	{
		pk[i] = rand() % 54;	
		for (j = 0; j < 54; j++)
		{
			if(pk[i] == pk[j] && i != j)
			{
				i--;
				break;
			}
		}
	}

	for (i = 0; i < 18; i++)
	{
		p0[i] = pk[i];
	}
	printf("p0	:");
	for (i = 0; i < 18; i++)
	{
		m = p0[i] / 13;
		p0[i] = p0[i] % 13 + 1;
		switch (m)
		{
			case 0:
					printf("b:");
					break;
			case 1:
					printf("r:");
					break;
			case 2: 
					printf("c:");
					break;
			case 3:
					printf("d:");
					break;
			case 4:
					printf("w:");
					break;
		}
		printf("%d ",p0[i]);
	}
	printf("\n");

	i = 18;
	for (j = 0; j < 18; j++)
	{
		p1[j] = pk[i];
		i++;
	}
	printf("p1	:");
	for (j = 0; j < 18; j++)
	{
		m = p1[j] / 13;
		p1[j] = p1[j] % 13 + 1;
		switch (m)
		{
			case 0:
					printf("b:");
					break;
			case 1:
					printf("r:");
					break;
			case 2: 
					printf("c:");
					break;
			case 3:
					printf("d:");
					break;
			case 4:
					printf("w:");
					break;
		}
		printf("%d ",p1[j]);
	}
	printf("\n");

	i = 36;
	for (k = 0; k < 18; k++)
	{
		p2[k] = pk[i];
		i++;
	}
	printf("p2	:");
	for (k = 0; k < 18; k++)
	{
		m = p2[k] / 13;
		p2[k] = p2[k] % 13 + 1;
		switch (m)
		{
			case 0:
					printf("b:");
					break;
			case 1:
					printf("r:");
					break;
			case 2: 
					printf("c:");
					break;
			case 3:
					printf("d:");
					break;
			case 4:
					printf("w:");
					break;
		}
		printf("%d ",p2[k]);
	}
	printf("\n");
	return 0;
}
