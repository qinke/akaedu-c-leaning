#include <stdio.h>
int main(void)
{
	int a;
char ch;
	float f;
    scanf("%d\n%c%f",&a,&ch,&f);
//	printf("a= %d, &a=%p\n",a,&a);
	printf("a= %d\n ch= %c\n f= %f\n",a,ch,f);
	return 0;
}
