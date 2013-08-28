#include <stdio.h>
#include <string.h>
#include <time.h>

enum huase
{
	CLUBS,DIAMONDS,HEARTS,SPADES
}item;
int main(void)
{
	int a[54];
	int p0[18],p1[18],p2[18];
	int i,j;
	int tmp;

	srand(time(NULL));
    for(i=0;i<54;i++)
	{
       tmp = rand()%54;
	   for(j=0;j<18;j++)
		   if(tmp / 13 = 0)
			   item[0]=CLUBS;
			   else if(tmp / 13 = 1)
				   item[1]=DIAMONDS;
				   else if(tmp / 13 = 2)
					   item[2]=HEARTS;
					   else if(tmp /13 = 3)
						   item[3]=SPADES;
		
		printf("paishu is : %d\n",tmp % 13)
	}
}

