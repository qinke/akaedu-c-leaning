#include <stdio.h>
#include <string.h>
int main(void)
{
	int old;
	printf("input a old: ");
	scanf("%d",&old);
	old<=20?printf("young girl\n"):printf("woman\n");//strcpy(str,"woman");将字符串复制给字符数组
	return 0; 
}
