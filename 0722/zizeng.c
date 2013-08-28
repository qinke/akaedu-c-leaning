#include <stdio.h>
int main(void)
{
		int i=0,num[10]={0};
//		num[i++]+=1;
        num[i++]=num[i++]+1;
		printf("num[0]=%d, num[1]=%d,i=%d\n",num[0],num[1],i);
		return 0;
	}
