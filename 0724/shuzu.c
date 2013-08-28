#include <stdio.h>
#include <time.h>
int main(void)
{
 /*  int	 str[100];
   int i;
  srand(time(NULL));
  for(i=0;i<100;i++)
  str[i]=rand()%1000;
  for(i=0;i<100;i++)
  printf("%d\n",str[i]);
  return 0;*/   //产生随机数
  int str[100]={0};
  int i,j,tmp,flag=0;
  srand(time(NULL));
  str[0]=rand()%100;
  for(i=1;i<100;i++)
  {
	  flag=1;
	  tmp=rand()%100;
	  for(j=0;j<i;j++)
		  if(str[j]==tmp)
		  {
			  i--;
			  flag=0;
			  break;
		  }
		  if(flag)
			  str[i]=tmp;//产生不同的随机数
  }
  for(i=0;i<100;i++)
	  for(j=1;j<100-i;j++)
		  if(str[j-1]>str[j])
		  {
             tmp=str[j-1];
			 str[j-1]=str[j];
			 str[j]=tmp;
		  }//冒泡排序，从小到大排列
		  for(i=0;i<100;i++)
		  {
			  if(i%8==0)
				  printf("\n");
				  printf("%4d",str[i]);//输出的格式，一行排8个
		  }
		  printf("\n");
		  return 0;
}
