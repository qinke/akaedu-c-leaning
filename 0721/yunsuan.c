#include <stdio.h>
int sub(int a,int b)
{
	int res;
	res= a - b;
	return res;
}
int sum(int a,int b)
{
	int sum;
	sum= a + b;
	return sum;
}
int mul(int a,int b)
{
	int mul;
	mul= a * b;
	return mul;
}
int div(int a,int b)
{
	int div;
	div= a / b;
	return div;
}
int main(void)
{
	int s,a,b;
	scanf("%d %d",&a,&b);
	s=sum(a,b);
	printf("%d + %d = %d\n",a,b,s);
	s=sub(a,b);
	printf("%d - %d = %d\n",a,b,s);
	s=mul(a,b)	;
	printf("%d * %d = %d\n",a,b,s);
	s=div(a,b);
	printf("%d / %d = %d\n",a,b,s);
	return 0;
}
