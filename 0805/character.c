#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CH_LEN  26
int show_arr(char *arr, int len);
int get_diff_character(char *arr, int len);

int main(void)
{
	char array[CH_LEN];
	get_diff_character(array, CH_LEN);
	show_arr(array, CH_LEN);
	return 0;
}

//获取26个不同的字符
int get_diff_character(char *arr, int len)
{
	int count = 0;
	int i;
	int flag = 0;
	srand(time(NULL));
	while (count < len)
	{
		i = rand() % CH_LEN;
		if (!((1u << i) & flag))
		{
			arr[i] = 'a' + i;
			count++;
			flag |= 1u<< i;
		}
	}
	return 0;
}

//显示字符
int show_arr(char *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	putchar('\n');
	return 0;
}
