#include <stdio.h>
#include <stdlib.h>

#define N 16
#define MAX 100
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
void bubble_sort(int a[], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
		for (j = len-1; j > i; j--)
			if (a[j-1] > a[j])
				swap(&a[j-1], &a[j]);
}
int search(int a[], int l, int r, int key)
{
	int m;
	while (l <= r) {
		m = (l+r) / 2;
		if (key > a[m])			l = m+1;
		else if (key < a[m])	r = m-1;
		else return 1;
	}
	return 0;
}
int search_r(int a[], int l, int r, int key)
{
	if (l > r) return 0;
	int m = (l+r) / 2;
	if (key > a[m]) return search_r(a, m+1, r, key);
	else if (key < a[m]) return search_r(a, l, m-1, key);
	else return 1;
}
int main(int argc, char *argv[])
{
	int a[N], key;
	key = atoi(argv[1]);
	init_array(a, N);
	show_array(a, N);
	bubble_sort(a, N);
	if (search_r(a, 0, N-1, key))
		printf("find %d ok\n", key);
	else
		printf("un find \n");
	show_array(a, N);
	return 0;
}
