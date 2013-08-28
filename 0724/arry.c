#include <stdio.h>
int main(void)
{
	int a[100] = {0};
	int i, j, tmp, flag = 0;
	srand(time(NULL));
	a[0] = rand()%100;
	for (i = 1; i < 100; i++)
	{
		flag = 1;
		tmp = rand()%100;
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
		printf("%d\t", a[i]);

	return 0;
}
