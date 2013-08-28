#include <stdio.h>
#include <string.h>
#include <time.h>

#define N 54//54张牌
#define M 4//四种花色
#define T 5//保存花色
#define P 13//牌的最大值
#define U 17//每个人起到的17张牌
#define D 3//三张底牌

int main(void)
{
	int i, j, num;
	int tmp, a[N], p[D][U];
	char color[M][T] = {"黑","红","梅","方"};//黑14 小王，红14大王

	srand(time(NULL));
	a[0] = rand()%N;
	for(i = 1;i < N; i++)
	{
		tmp = rand()%N;
		for(j = 0, num = 0; j < i; j ++)
			if(tmp != a[j])	
				num ++;
		if(num == i)
			a[i] = tmp;
		else 
			i--;
	}
	
	printf("五十四个随机数:\n");
	for(i = 0 ; i < N; i ++)
	{
		printf("%-4d ", a[i]);
		if((i + 1) % 10 == 0)
			printf("\n");
	}

	printf("\n");
	printf("\n");
	
	printf("随机后的牌:\n");
	for(i = 0; i < N; i ++)
	{
		if(((a[i] + 4) % 4 == 0) && ((a[i] + 4) / 4 > P))
			printf("(小王)  ");
		else if(((a[i] + 4) % 4 == 1) && ((a[i] + 4) / 4 > P))
			printf("(大王)  ");
		else
			printf("(%s%-2d) ",color[(a[i] + 4) % 4], (a[i] + 4) / 4);

		if((i + 1) % 10 == 0)
			printf("\n");
	}

	printf("\n\n");

	printf("打印三个人的牌:\n");
	for(i = 0; i < D; i ++ )
		for(j = 0; j < U; j ++ )
			p[i][j] = i + (j - i) * D;

	for(i = 0; i < D; i ++)
	{
		printf("第 %d 个人的牌如下：\n", i + 1);
		for(j = 0; j < U; j ++ )
			if(((a[p[i][j]] + 4) % 4 == 0) && ((a[p[i][j]] + 4) / 4 > P))
				printf("(小王)  ");
			else if(((a[p[i][j]] + 4) % 4 == 1) && ((a[p[i][j]] + 4) / 4 > P))
				printf("(大王)  ");
			else
				printf("(%s%-2d) ",color[(a[p[i][j]] + 4) % 4], (a[p[i][j]] + 4) / 4);
		printf("\n\n");
	}
	//打印底牌
	printf("三张底牌是:\n");
	for(i = N - 3; i < N; i ++)
		if(((a[i] + 4) % 4 == 0) && ((a[i] + 4) / 4 > P))
			printf("(小王)  ");
		else if(((a[i] + 4) % 4 == 1) && ((a[i] + 4) / 4 > P))
			printf("(大王)  ");
		else
		printf("(%s%-2d) ", color[(a[i] + 4) % 4], (a[i] + 4) / 4);

	printf("\n");
	printf("\n");
	return 0;
}

