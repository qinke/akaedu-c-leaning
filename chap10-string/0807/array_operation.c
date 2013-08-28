#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define    LEN    10
#define    DEBUG

typedef int (*pfun)(int *, int );
typedef U8  unsigned char;

int initize_arr(int *arr, int len);
static int print_arr(int *arr, int len);
void traverse(int (*fun)(int *, int), int *arr, int len);

int main(int argc, char *argv[])
{
	int array[LEN];
	initize_arr(array, LEN);
	traverse(print_arr, array, LEN);
	return 0;
}

int initize_arr(int *arr, int len)
{
#ifdef DEBUG
	assert(NULL != arr);
	assert(len > 0);
#endif
	if (NULL == arr || len <= 0)
	{
		return -1;
	}
	int i;

	srand(time(NULL));
	for (i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}
	return 0;
}


static int print_arr(int *arr, int len)
{
#ifdef DEBUG
	assert(NULL != arr);
	assert(len > 0);
#endif
	if (NULL == arr || len <= 0)
	{
		return -1;
	}
	int i;
	for (i = 0; i < len; i++)
	{
		fprintf(stdout, "%02d ", arr[i]);
	}
	fprintf(stdout, "\n");

	return 0;
}

void traverse(pfun fun, int *arr, int len)
{
	fun(arr, len);	
}
