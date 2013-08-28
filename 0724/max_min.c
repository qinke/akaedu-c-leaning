#include <stdio.h>
#include <string.h>
int main(void)
{
 	int str[6];
	int i,max=0,min=0;
	int num=str[0];
	for(i=0;i<6;i++)
		scanf("%d",&str[i]);
	for(i=0;i<6;i++)
		if(str[i]>num)
		{
			max=i;
			num=str[max];
		}
	for(i=0;i<6;i++)
		if(str[i]<num)
		{
			min=i;
			num=str[min];
		}
	printf("max_num= %d,min_num= %d,max= %d,min= %d\n",str[max],str[min],max,min);
	return 0;
}

