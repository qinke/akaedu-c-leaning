#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i,j,c,b,t,k;
	int a[100];
	int s;
	printf("input shu number: ");
    scanf("%d",&k);
	printf("input 2 number zhijian de shu: ");
	scanf("%d%d",&c,&b);
	s=b-c+1;
	srand(time(NULL));
	for(i=0;i<k;i++)
		a[i]=rand()%s;
	for(i=0;i<k;i++)
	{
		for(j=1;j<k;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<k;i++)
	printf("%d\n",a[i]);
	return 0;
}
