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
void merge(int a[], int l, int m, int r)
{
	int i, j, k, b[r+1];
	for (i = l; i <= r; i++)
		b[i] = a[i];
	i = l; j = m+1; k = l;
	while (i <= m && j <= r)
		if (b[i] < b[j]) a[k++] = b[i++];
		else			 a[k++] = b[j++];
	while (i <= m)		 a[k++] = b[i++];
	while (j <= r)		 a[k++] = b[j++];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r) return;
	int m = (l+r) / 2;
	merge_sort(a, l, m);
	merge_sort(a, m+1, r);
	merge(a, l, m, r);
}
int main(void)
{
	int a[N];
	init_array(a, N);
	//show_array(a, N);
	merge_sort(a, 0, N-1);
	//show_array(a, N);
	return 0;
}
