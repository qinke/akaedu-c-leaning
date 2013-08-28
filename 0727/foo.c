#include <stdio.h>
int foo(int a);
{
   a=6;
   printf("%d\n",a);
   return a; //return 6;
}
int main(void)
{
	int a=3;
	printf("%d\n",a);
	a=foo(a);  //a= 6;
	printf("%d\n",a); //a=6;
}
