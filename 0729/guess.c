#include <stdio.h>
#include <string.h>
#include <time.h>
char ans[5] = {'z', 'z', 'z', 'z', '\0'};
char gue[5];
int x, y;
char rand_no(void)
{
	char b[50];
	int i, j=0, k=0;
	srand(time(NULL));
	for (i = 0; i < 50; i++)
		b[i] = rand() % 10+'0';
	for (i = 0; i < 50; i++)	{
		for (j = 0; j < 4; j++){
			if (b[i] != ans[0] && b[i] != ans[1] && b[i] != ans[2] && b[i] != ans[3])
			{
				ans[k] = b[i];
				k++;
				if (k==4)
					return 0;
			}
		}
	}


}
int right_or_n()
{
	int 	i = 0, j;
	for(i = 1; i < 4; i++)
	{
		for(j = 0; j !=i && j < 4; j++)
			if(gue[i] == gue[j])
			{
				printf("You input the wrong NO.\n");
				return 1;
			}
	}
	return 0;

}
int y_or_n(void)
{
	int i ,j ,m = 0,n = 0;
	for(i=0; i<4; i++)
	{
		if(ans[i] == gue[i])
			m++;
		else
			for(j = 0; j < 4; j++)
			{
				if(ans[i] == gue[j])
					n++;
			}

	}
	x=m;
	y=n;
	return 0;
}
int  main (void)

{
	rand_no();
	int i,j,k;
	for(i = 0; i < 20; i++){
		if( i == 10){
			printf("ni ge  da ben dan hahaha");
			return 0;
		}
		printf("Please input the 4 NO. you guess:\n");
		scanf("%s",gue);
		k = right_or_n();
		if( k == 1 ){
			continue;
		}
		y_or_n();
		if(x == 0 && y == 0)
			printf("No num. is here");
		if(x == 4){
			printf("You done!\n");
			break;
		}
		else{

			for (j = 0; j < x; j++)
				printf("A");
			for(j = 0; j < y; j++)
				printf("B");
			printf("\n");
		}
	}

	return 0;
}
