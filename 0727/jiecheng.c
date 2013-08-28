//1、递归函数，自己调用自己。2、函数中有终止条件，避免出现无限递归
#include <stdio.h>
int foctoral(int n)
{
	if(n==1)
		return 1;
		return n * foctoral(n-1);
}
int main(void)
{
	int res;
    res=foctoral(5);	
    printf("%d\n",res);
	return 0;
}
