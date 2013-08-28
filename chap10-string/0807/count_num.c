#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DEBUG
#define MAX_LEN    20
int count_num(int start, int end, int key, int *arr);

int main(int argc, char *argv[])
{
	int rtval = -1, i;
	int start, end, key;
	int array[MAX_LEN];
	memset(array, 0, MAX_LEN);
	fprintf(stdout, "Please input three numbers: \n");
	scanf("%d%d%d", &start, &end, &key);
	rtval = count_num(start, end, key, array);
	if (rtval < 0)
	{
		fprintf(stdout, "Parameter error!\n");
	}
	else
	{
		fprintf(stdout, "%d ~ %d has %d numbers of %d\n", start, end, rtval, key);
	}
	for (i = 0; i < rtval; i++)
	{
		fprintf(stdout, "%d  ", array[i]);
	}
	putchar('\n');
	return 0;
}


int count_num(int start, int end, int key, int *arr)
{
#ifdef DEBUG
	assert(start < end);
	assert(arr != NULL);
#endif
	if (start > end || arr == NULL )
	{
		return -1;
	}
	int count = 0;
	int i;

	for (i = start; i <= end; i++)
	{
		int tmp = i;
		if (i == 0 && key == 0)
		{
			arr[count++] = i;
		}
		while (tmp)
		{
			if (tmp % 10 == key)
			{
				arr[count++] = i;
			}
			tmp = tmp / 10;
		}
	}
	return count;
}
