#include <stdio.h>
#include <stdlib.h>
void rand_num(int a[], int num, int min, int max)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < num; i++)
		a[i] = rand() % (max-min) + min;
	return;
}
void show_num(int a[], int num)
{
	int i;
	for (i = 0; i < num; i++) 
	{
		if (i % 10 == 0)
			printf("\n");
		printf("%4d", a[i]);
	}
	printf("\n");
}

int sum_num(int a[],int b[], int num, int sum, int min, int max)
{
	int i, j, k, n, res, tmp;
	for (i = 0 ; i < num; i++)
		b[a[i]]++;
	for (i = min; i < max; i++)
		printf("%d\t%d\n", b[i], i);

	n = sum / min;

	for (i = min; i < max; i++)
		for (j = i, k = 0, tmp = 0; j < max; j++)
		{
//			if ()
			tmp += j;
			if (tmp < sum)
			{
				b[k++] = a[j];
			}
			else if (tmp == sum)
			{
				show_num(b, k);
				tmp -=a [j];
				k--;
			}
			else
				tmp -= a[j];
		}

}
int main(void)
{
	int a[1000] = {0}, b[1000] = {0}, num, min, max, sum = 100;
	int i, j;
	printf("How many iterms?\n");
	scanf("%d", &num);
	printf("min to max\n");
	scanf("%d%d", &min, &max);
	rand_num(a, num, min, max);
	show_num(a, num);
	sum_num(a, b, num, sum, min, max);


	return 0;
}
