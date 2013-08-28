#include <stdio.h>
#include <stdlib.h>

#define N 100000
#define MAX 100000
void init_array(int a[], int len)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < len; i++)
		a[i] = rand() % MAX;
}
void show_array(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%3d", a[i]);
	putchar('\n');
}
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a; *a = *b; *b = tmp;
}
int partition(int a[], int l, int r)
{
	int i, j;
	for (i = l+1, j = l; i <= r; i++)
		if (a[i] < a[l])
			swap(&a[i], &a[++j]);
	swap(&a[j], &a[l]);
	return j;
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r) return;
	int k = partition(a, l, r);
	quick_sort(a, l, k-1);
	quick_sort(a, k+1, r);
}
int main(void)
{
	int a[N];
	init_array(a, N);
//	show_array(a, N);
	quick_sort(a, 0, N-1);
//	show_array(a, N);
	return 0;
}
