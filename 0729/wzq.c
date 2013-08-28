#include <stdio.h>

#define R 8    
#define L 8

void show (int b[][L])
{
	int i, j;

	printf("  ");
	for(i = 0; i < L; i++)
		printf(" %d", i);
	printf("\n  ");
	for(i = 0; i < L; i++)
		printf("--");
	printf("\n");

	for (i = 0; i < L; i ++) {
		printf("%d|", i);
		for (j = 0; j < R; j++){
			printf(" %d", b[i][j]);
			if(j == R - 1)
				printf("\n");
		}
	}
}

int judge(int d[][L])
{
	int i, j;

	for(i = 0;i < R;i++)
		for(j = 0; j < L; j++){

			if(((d[i][j] == 1)
						&&(j+4 < L)
						&& (d[i][j+1] == 1)
						&& (d[i][j+2] == 1)
						&& (d[i][j+3] == 1)
						&& (d[i][j+4] == 1))
					|| ((d[i][j] == 1)
						&& (d[i+1][j+1] == 1)
						&& (d[i+2][j+2] == 1)
						&& (d[i+3][j+3] == 1)
						&& (d[i+4][j+4] == 1 ))
					|| ((d[i][j] == 1)
						&& (d[i+1][j] == 1)
						&& (d[i+2][j] == 1)
						&& (d[i+3][j] == 1)
						&& (d[i+4][j] == 1))
					|| ((d[i][j+4] == 1)
						&& (d[i+1][j+3] == 1)
						&& (d[i+2][j+2] == 1)
						&& (d[i+3][j+1] == 1)
						&& (d[i+4][j] == 1))) {
				printf("\nplay1 won\n");

				return 0;
			}
			if(((d[i][j] == 2)
						&&( d[i][j + 1] == 2 )
						&&(d[i][j + 2] == 2)
						&&(d[i][j + 3] == 2)
						&&(d[i][j + 4] == 2))
					||((d[i][j] == 2)
						&&(d[i + 1][j + 1] == 2)
						&&(d[i+2][j+2] == 2)
						&&(d[i+3][j+3] == 2)
						&&(d[i+4][j+4] == 2))
					||((d[i][j] == 2)
						&&(d[i + 1][j] == 2)
						&&(d[i+2][j] == 2)
						&&(d[i+3][j] == 2)
						&&(d[i+4][j] == 2))
					|| (d[i][j+4] == 1
						&& d[i+1][j+3] == 2
						&& d[i+2][j+2] == 2
						&& d[i+3][j+1] == 2
						&& d[i+4][j] == 2) ) {

				printf("\nplay2 won\n");

				return 0;
			}
		}

	return 1;
}

void computer(int f[][L],int r,int l)
{
	int i, j;

	for(i = 0;i < R;i++)
		for(j = 0; j < L; j++){
			if ((f[i][j] == 1)
					&& (f[i][j+1] == 1)
					&& (f[i][j+2] == 1)){
				if (((i < R && j+3 < L) && f[i][j+3] == 0)){
					f[i][j+3] = 2;goto cc;}
				else if (((i < R && j-1 >= 0) && f[i][j-1] == 0)){
					f[i][j-1] = 2;goto cc;}

			}
			if ((f[i][j] == 1)
					&& (f[i+1][j+1] == 1)
					&& (f[i+2][j+2] == 1)){
				if (((i+3 < R && j+3 < L) && f[i+3][j+3] == 0))
					f[i+3][j+3] = 2;
				else if (((i-1 >=0 && j-1 >= 0) && f[i-1][j-1] == 0))
					f[i-1][j-1] = 2;
				else
					goto cc;
			}
			if ((f[i][j] == 1)
					&& (f[i+1][j] == 1)
					&& (f[i+2][j] == 1)){
				if ((i+3 < R && j < L) && (f[i+3][j] == 0))
					f[i+3][j] = 2;
				else if (((i-1 >= 0) && f[i-1][j] == 0))
					f[i-1][j] = 2;
				else
					goto cc;
			}
			if ((f[i][j+4] == 1)
					&& (f[i+1][j+3] == 1)
					&& (f[i+2][j+2] == 1)){
				if (((i+3 < R) && f[i+3][j+1] == 0))
					f[i+3][j+1] = 2;
				else if (((i-1 >= 0 && j+5 < L) && f[i-1][j+5] == 0))
					f[i-1][j+5] = 2;
				else
					goto cc;
			}
		}

	for(i = 0; i < R; i++){
		for(j = 0;j < L; j++){
			if (f[R/2-1][L/2-1] != 1 && f[R/2-1][L/2-1] != 2){
				f[R/2-1][L/2-1] = 2;
				goto cc;
			}
			if((f[i][j] == 2) && (i+1 < R && j+1 < R) && (f[i+1][j+1] == 0)){
				f[i+1][j+1] = 2;
				goto cc;
			}
			if((f[i][j] == 2) && (j+1 < L) && (f[i][j+1] == 0)){
				f[i][j+1] = 2;
				goto cc;
			}
			if((f[i][j] == 2) && (i+1 < L) && (f[i+1][j] == 0)){
				f[i+1][j] = 2;
				goto cc;
			}
			if((f[i][j] == 2) && (i+1 < L && j-1 >= 0) && (f[i+1][j-1] == 0)){
				f[i+1][j-1] = 2;
				goto cc;
			}
		}
	}
cc: return ;

}

void human_computer(int e[][L])
{
	int r, l;
	int g = 1;
	int flag = 1;

	while (flag) {
		if (g % 2 == 1) {
aa:			printf("Play1 go: step:%d\n",g);
			scanf("%d %d",&r,&l);
			if ((r > R || l > L || e[r][l] == 1) || (e[r][l] == 2)){
				printf("erorr put! ");
				goto aa;
			}
			e[r][l] = 1;
			g++;
			show(e);
			flag = judge(e);
			if(flag == 0)
				break;
		}else if (g % 2 == 0) {
			printf("Computer go: sep:%d\n",g);
			computer(e,r,l);
			g++;
			show(e);
			flag = judge(e);
		}else {
			if(g == R*L)
				printf("play ended in a draw\n");
		}
	}

}

void human_human(int c[][L])
{
	int r, l;
	int g = 1;
	int flag = 1;

	while (flag) {
		if (g % 2 == 1) {
aa:			printf("Play1 go: step:%d\n",g);
			scanf("%d %d",&r,&l);
			if ((r > R || l > L || c[r][l] == 1) || (c[r][l] == 2)){
				printf("erorr put! ");
				goto aa;
			}
			c[r][l] = 1;
			g++;
			show(c);
			flag = judge(c);
			if(flag == 0)
				break;
		}else if (g % 2 == 0) {
bb:			printf("play2 go: step%d:\n",g);
			scanf("%d %d", &r, &l);
			if((r > R || l > L) || (c[r][l] == 1) || (c[r][l] == 2)){
				printf("erorr put! ");
				goto bb;
			}
			c[r][l] = 2;
			g++;
			show(c);
			flag = judge(c);
		}else {
			if(g == R*L)
				printf("play ended in a draw");
		}
	}
}

int main(void)
{
	int a[R][L] = {{0}};	
	int n;

	printf("please choice human-human(1) or hunman-computer(2):\n");
	scanf("%d", &n);
	show(a);
	switch(n){
		case(1):
			human_human(a);
			break;
		case(2):
			human_computer(a);
			break;
	}

	return 0;
}
