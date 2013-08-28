#include <stdio.h>
int sub(int a,int b)
{
	return a - b;
}

int sum(int a,int b)
{
	return a + b;
}

int mul(int a,int b)
{
	return a * b;
}
int div(int a,int b)
{
	if(b==0)
	{
		printf("error!");
		return -1;
	}
	return a / b;
}
int main()
{
	float a,b,res;
	int i;
	scanf("input 2 num:\n");
	scanf("%d%d",&a,&b);
	scanf("input i:\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("%d + %d = %d\n",a,b,sum(a,b));
			break;
		case 2:
			printf("%d - %d = %d\n",a,b,sub(a,b));
			break;
		case 3:
			printf("%d * %d = %d\n",a,b,mul(a,b));
			break;
		case 4:
			printf("%d / %d = %d\n",a,b,div(a,b));
		default:
			printf("error!");
	}
	return 0;
}
