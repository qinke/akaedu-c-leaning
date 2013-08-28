#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void print_num(int *p, int len);
void initize_nums(int *p, int len);

int main(int argc, char *argv[])
{
	int *p = NULL, *q = NULL;
	
	//注意malloc申请的空间大小是以字节为单位的
	p = (int *)malloc(16 * sizeof(int));
	if (NULL == p)
	{
		fprintf(stdout, "malloc failed!\n");
		exit(1);
	}
	memset(p, 0, 16);
	initize_nums(p, 16);
	print_num(p, 16);
	//注意realloc申请的空间大小也是以字节为单位的
	q = (int *)realloc(p, 20 * sizeof(int));
	if (NULL == q)
	{
		fprintf(stdout, "realloc failed!\n");
		exit(1);
	}
	//memset(q, 'a', 15);
	print_num(q, 36);
	
	return 0;
}

static void print_num(int *p, int len)
{
	int i;
	
	for (i = 0; i < len; i++)
	{
		fprintf(stdout, "%d  ", p[i]);
	}
	putchar('\n');
}

void initize_nums(int *p, int len)
{
	int i;
	
	for (i = 0; i < len; i++)
	{
		*(p+i) = i;
	}
}

