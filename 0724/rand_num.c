#include <stdio.h>
#include <time.h>
int main(void)
{
	int i,j,flag,tmp;
	int a[1024];
	int n;
	scanf("%d",&n);
	srand(time(NULL));
	a[0]=rand()%100;
	for(i=1;i<n;i++)
		{
			flag=1;
			tmp=rand()%100;
			for(j=0;j<i;j++)
				if(a[j]==tmp)
				{
					i--;
					flag=0;
					break;
				}
				if(flag)
					a[i]=tmp;
		}
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);

		return 0;
}
