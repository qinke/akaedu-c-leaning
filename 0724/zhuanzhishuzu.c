#include <stdio.h>
int main(void)
{
	int num[5][5]={{1,6,2,3,7},
		{2,7,3,2,2},
		{3,2,5,2,6},
		{3,2,6,4,2},
		{4,3,7,4,8}};
	int i,j,tmp[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
				tmp[j][i]=num[i][j];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%d\t",tmp[i][j]);
	printf("\n");
   }
}
