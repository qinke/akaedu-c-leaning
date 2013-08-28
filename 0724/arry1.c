#include <stdio.h>
int main(void)
{
	int a[100] = {0};
	int i, j, tmp, flag = 0;
	srand(time(NULL));
	a[0] = rand()%1000;
	for (i = 1; i < 100; i++)
	{
		flag = 1;
		tmp = rand()%1000;
		for (j = 0; j < i; j++)
			if (a[j] == tmp)
			{
				i--;
				flag = 0;
				break;
			}
		if (flag)
			a[i] = tmp;
	}
	for (i = 0; i < 100; i++)
		for (j = 1; j < 100-i; j++)
			if (a[j-1] > a[j])
			{
				tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
	for (i = 0; i < 100; i++)
	{
		if (i%8 == 0)
			printf("\n");
		printf("%4d", a[i]);
	}
	printf("\n");

	return 0;
}
