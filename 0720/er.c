#include <stdio.h>
int main(void)
{
/*	int i,a;
	printf("input a num:");
   while  (i) {
	  a % 2==1;
	  i++;
	  a=a / 2;
   }
   printf("i= %d\n",i);
  */
  
  
  int count=0,num;
  scanf("%d",&num);
  while(num)
  {
	  count++;
	  num=num&num-1;
	  }
  printf("count=%d\n",count);
  return 0;
}
