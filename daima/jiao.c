#include <stdio.h>

int main(int argc,const char *argv[])
{
	int a,b,c;

	printf("Please input 3 num:");
	scanf("%d %d %d",&a,&b,&c);

	if((a<0)||(b<0)||(c<0))
	{
		printf("Invariable input!\n");
	}
	else
	{
		if(((a+b)>c)&&((a+c)>b)&&((c+b)>c))
		{
			printf("a=%d,b=%d,c=%d can found a triangle\n",a,b,c);
		}
		else
		{
			printf("a=%d,b=%d,c=%d can not found a triangle\n",a,b,c);
		}
	}

	return 0;
}
