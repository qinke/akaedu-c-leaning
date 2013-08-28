#include <stdio.h>
#define N 8

void print(int a[][N], int n)
{
	int		i,j;

	printf("\n   ");
	for (j =0; j < N; j++) {
		printf("%d ",j);
	}
	printf("\n");
	printf("------------------");
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d|",i);
		printf(" ");
		for (j = 0; j < N; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");

	}
}

int  compare(int a[][N],int n)
{
	int		i,j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < N; j++) {
			if ((a[i][j] == 1)&&(a[i][j+1] == 1)&&(a[i][j+2] == 1)&&(a[i][j+3] == 1)&&(a[i][j+4] == 1)) {
				printf("player1 win!\n");
				return  -1;
			}
			else if ((a[i][j] == 2)&&(a[i][j+1] == 2)&&(a[i][j+2] == 2)&&(a[i][j+3] == 2)&&(a[i][j+4] == 2)) {			
				printf("player2 win!\n");
				return  -1;
			}

			else if ((a[i][j] == 1)&&(a[i+1][j] == 1)&&(a[i+2][j] == 1)&&(a[i+3][j] == 1)&&(a[i+4][j] == 1)) {
				printf("player1 win!\n");
				return  -1;
			}
			else if ((a[i][j] == 2)&&(a[i+1][j] == 2)&&(a[i+2][j] == 2)&&(a[i+3][j] == 2)&&(a[i+4][j] == 2)) {
				printf("player1 win!\n");
				return  -1;
			}

			else if ((a[i][j] == 1)&&(a[i+1][j+1] == 1)&&(a[i+2][j+2] == 1)&&(a[i+3][j+3] == 1)&&(a[i+4][j+4] == 1))	{
				printf("player1 win!\n");
				return  -1;
			}
			else if ((a[i][j] == 2)&&(a[i+1][j+1] == 2)&&(a[i+2][j+2] == 2)&&(a[i+3][j+3] == 2)&&(a[i+4][j+4] == 2)) {
				printf("player2 win!\n");
				return  -1;
			}

			else if ((a[i][j] == 1)&&(a[i-1][j-1] == 1)&&(a[i-2][j-2] == 1)&&(a[i-3][j-3] == 1)&&(a[i-4][j-4] == 1))	{
				printf("player1 win!\n");
				return  -1;
			}
			else if ((a[i][j] == 2)&&(a[i-1][j-1] == 2)&&(a[i-2][j-2] == 2)&&(a[i-3][j-3] == 2)&&(a[i-4][j-4] == 2))	{
				printf("player2 win!\n");
				return  -1;
			}
		}
	}
	return 0;
}

int  choice(int a[][N],int n)
{
	int		m,p,flag = 1,t;
	int		i;

	printf("you can input 4 4 to put a chess on board  \n");
	for (i = 0; i < 50; i++) {
		if (flag) {
			printf("player 1 choice is :" );
			scanf("%d%d",&m,&p);
			if ((m < n)&&(m >= 0)&&(p >= 0)&&(p < N)&&(a[m][p] == 0)) {
				a[m][p] = 1;
				print(a,n);
				//  compare(a,8);
				t = compare(a,n);
				if (t == -1)
					return ;
				flag--;
			}
			else /* if ((m >= n) || (p >= N)||(a[m][p] != 0))*/ {
				printf("Invial num!\n");
				return 0;
			}
		}
		else {
			printf("player 2 choice is :");
			scanf("%d%d",&m,&p);
			if (( m < n)&&(m >= 0)&&(p >= 0)&&(p < N)&&(a[m][p] == 0)) {
				a[m][p] = 2;
				print(a,n);
				//	compare(a,8);
				t = compare(a,n);
				if (t == -1)
					return ;
				flag++;
			}
			else  /*if((m >= n)||(p >= N)||(a[m][p] != 0))*/ {
				printf("Invial num!\n");
				return 0;
			}
		}
	}
}

int main(void)
{
	int	 a[8][8] = {0};

	print(a, 8);
	choice(a, 8);
//	compare(a,8);

	return 0;
}
