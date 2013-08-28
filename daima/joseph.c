#include <stdio.h>

#define ALL_NUM 100
#define COUNT_NUM 3
#define OUT_NUM 3

int people[ALL_NUM];

int main(void)
{
	int left;
	int pos;
	int step;
	int i;

	int counter = 0;

	left = ALL_NUM;
	pos = 0;
	step = 0;

	for(i = 0; i < ALL_NUM; i++)
		people[i] = i + 1;

	while(left > 0) {
		if(people[pos] > 0)
			step++;
		if(step == OUT_NUM && people[pos] != 0)
		{
			printf("%-3d out \n", people[pos]);
			people[pos] = 0;
			left--;
		}

#if 1
		pos = ++pos % ALL_NUM;
		step = step % COUNT_NUM;
#else
		pos++;
		if(pos == ALL_NUM)
			pos = 0;
		if(step == COUNT_NUM)
			step = 0;
#endif
	}

	return 0;
}
