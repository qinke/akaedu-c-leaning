#include <stdio.h>
int main(void)
{
	int i;
	int a[100];
	srand(time(NULL));
	for(i=0;i<30;i++)
	a[i]=rand()%100;
	for(i=0;i<30;i++)
	printf("%d\n",a[i]);
	return 0;
}
