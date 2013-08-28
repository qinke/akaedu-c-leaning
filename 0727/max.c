#include <stdio.h>

/*
int main(void)
{
	int a[3]={3,5,8};
	int max=a[0],i;
	for(i=1;i<3;i++)
	{
       if(a[i]>max)
	    max=a[i];
	}
	printf("max= %d\n",max);
	return max;

}
*/
/*
int max_num(int a[],int n)
{
	int max,i;
	max=a[0];   //if(n==0) return -1;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int main(void)
{
	int a[3]={3,5,4};
	int max;
	max=max_num(a, 3); //max=max_num(a,0);
	printf("max= %d\n",max);
    return 0;
}
*/    //找出数组中最大的数

char max_char(char a[],int n)
{
	int i;
	char max=a[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];

			return max;
}
int main(void)
{
	char a[11]={"helloworld"};
	char max;
	max = max_char(a,11);
	printf("max= %c\n",max);
	return 0;
}
