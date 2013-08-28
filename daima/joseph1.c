#include <stdio.h>

int main(void)
{
	int i, j, n, count = 0;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		a[i] = 3;
	}
	while(count+1-n)
	{
		i = (i % n);
		if(a[i] == 0)
			i++;
		else
		{
			j = (j % 3);
			a[i] = j;
			if(j == 0)
				count++;
			i++;
			j++;
		}
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] != 0)
		{
			printf("%d\n", i+1);
			break;
		}
	}

	return 0;
}

