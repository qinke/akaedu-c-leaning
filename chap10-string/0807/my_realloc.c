#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define    LEN    16

void print_num(int *arr, int len);

int main(int argc, char *argv[])
{
	int *p = NULL, *q = NULL;
	int i;
#if 0
	q = (int *)realloc(p, 20);
	if (NULL == q)
	{
		fprintf(stderr, "realloc error!\n");
		exit(1);
	}
	print_num(q, LEN);
#endif
	p = (int *)malloc(LEN * sizeof(int));
	if (NULL == p)
	{
		fprintf(stderr, "malloc failed!\n");
		exit(1);
	}
#if 1
	for (i = 0; i < LEN; i++)
	{
		p[i] = i;
	}
#endif
	//memset(p, 0, LEN);
	print_num(p, LEN);
	q = (int *)realloc(p, 20 * sizeof(int));
	if (NULL == q)
	{
		fprintf(stderr, "realloc error!\n");
		exit(1);
	}

	print_num(q, LEN);

	return 0;
}

void print_num(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		fprintf(stdout, "%d ", arr[i]);
	}
	fprintf(stdout, "\n");
}
