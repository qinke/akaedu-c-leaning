#include <stdio.h>
#include <time.h>
void printf_num(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
	  {
		  if(i%8==0)
			  printf("\n");
			  printf("%4d",a[i]);
	  }
	  printf("\n");
}
void buddlesort(int a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
			if(a[j]>a[j-1])
			{
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
}	
void rand_num(int a[],int n)
{
  int i,j,flag,tmp;
  srand(time(NULL));
  a[0]=rand()%100;
  for(i=1;i<n;i++)
  {
	  flag=1;
	  tmp=rand()%100;
	  for(j=0;j<i;j++)
		  if(a[j]==tmp)
		  { 
              i--;
			  flag=0;
			  break;
		  }
		  if(flag)
			  a[i]=tmp;
  }
}
int main(void)
{
	int a[100];
	int n=30;
    rand_num(a,30);
    buddlesort(a,30);
	printf_num(a,30);
	return 0;
}
