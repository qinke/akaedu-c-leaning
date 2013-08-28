/*filename:max_3.c
 *
 *function:max of 3 num
 *
 *author:YourName
 *
 *version:0.1
 *
 *date:2011-10-26
 *
 */



#include<stdio.h>

int main(int argc,const char *argv[])
{
	int max,a,b,c;

	printf("Please input 3 num:");
	scanf("%d %d %d",&a,&b,&c);

	max=a;

	if(max<b)
		max=b;
	if(max<c)
		max=c;

	printf("max of 3 num is :%d\n",max);

	return 0;
}
