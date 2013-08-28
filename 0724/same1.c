#include <stdio.h>
int main(void)
{
	int str[6];
	int i,j;
	for(i=0;i<6;i++)
		scanf("%d",&str[i]);
		for(i=0;i<6;i++)
			for(j=i+1;j<6;j++)
				if(str[i] == str[j])
				{
					printf("the same num \n");
					goto loop;
				}
    loop:
	    printf("\n");
		return 0;
}
