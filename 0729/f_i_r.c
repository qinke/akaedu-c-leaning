#include <stdio.h>
#include <string.h>
int pri_f(int a[][20],int m)	
{
	int i,j;

	printf("  ");
	for ( i = 0; i < m; i++)
		printf("%3d",i);
	printf("\n");
	for(i = 0; i < m; i++)
		printf("~~~~");

	for(i = 0; i < m; i++){
		printf("\n%d|",i);
		for(j = 0; j < m; j++)
			printf("%3d",a[i][j]);
	}
	printf("\n");
}
int input(int a[][20],int k)
{
	int m, n, ch = 0, i, temp;	
	
	for(i=0;i<100;i++)
	{
		if(ch==0){
			printf("P1 go->:");
			scanf("%d%d",&m,&n);
			if(m>k||n>k){
				printf("zhu a ni!!\n");
				continue;
			}
			if(a[m][n] != 0){
				printf("zhu a ni!!!!\n");
				continue;
			}
			a[m][n] = 1;
			pri_f(a,k);
			temp=w_or_n(a,k,m,n,1);
			if(temp == 1)
				break;
			ch++;
		}
		if(ch == 1){
			printf("P2 go->:");
			scanf("%d%d", &m, &n);
			if(m > k || n > k){
				printf("zhu a ni!!\n");
				continue;
			}
			if(a[m][n] != 0)
			{
				printf("zhu a ni!!!!\n");
				continue;
			}
			a[m][n] = 2;
			pri_f(a,k);
			temp=w_or_n(a,k,m,n,2);
			if(temp == 1)
				break;
			ch--;
		}
	}

}
int w_or_n(int a[][20], int b, int i, int j, int k)
{
	int m = 0, n = 0, sum = 0, x, y;
	for(x = i; x >= 0; --x){
		if(a[x][j] == k)
			m++;
		else
			break;
	}
	for(x = i; x <= b ; ++x){
		if(a[x][j] == k)
			n++;
		else
			break;
	}
	sum = m + n-1;
	if(sum >= 5)
	{
		printf("YOU Win!!!!\n");
		return 1;
	}
	else
		m = n = sum = 0;
	for(x = j; x >= 0; --x){
		if(a[i][x] == k)
			m++;
		else
			break;
	}
	for(x = j; x <= b; ++x)
	{
		if(a[i][x] == k)
			n++;
		else
			break;
	}
	sum = m + n - 1;
	if(sum >= 5)
	{
		printf("YOU Win!!!!\n");
		return 1;
	}
	else
		m = n = sum = 0;
	for(x = i, y = j; x >= 0 && y >= 0; --x, --y){
		if(a[x][y] == k)
			m++;
		else
			break;
	}
	for(x = i, y = j; x <= b && y <= b; ++x,++y)
	{
		if(a[x][y]==k)
			n++;
		else
			break;
	}
	sum=m+n-1;
	if(sum>=5)
	{
		printf("YOU Win!!!!\n");
		return 1;
	}
	else
		m=n=sum=0;
	for(x = i, y = j; x <= b&& y >= 0; ++x,--y){
		if(a[x][y]==k)
			m++;
		else
			break;
	}
	for(x = i, y = j; x >= 0 && y<=b; --x, ++y)	{
		if(a[x][y]==k)
			n++;
		else
			break;
	}
	sum=m+n-1;
	if(sum>=5)
	{
		printf("YOU Win!!!!\n");
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	int n;
	int a[20][20] = {0};

	printf("Input the area:");
	scanf("%d",&n);
	pri_f(a,n);
	input(a,n);
	return 0;
}
