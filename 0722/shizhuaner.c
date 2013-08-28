#include <stdio.h>
int main(void)
{
	int a,b[16];
	int j,i=0;
	printf("input a num a: ");
	scanf("%d",&a);
	for(i=0;i<16;i++)
	{
      j=a%2;
	  b[i]=j;
      a=a/2;
	}
	for(i=15;i>=0;--i)
	{
   printf("b[i]=%d\n",b[i]);
	}
   return 0;
}
