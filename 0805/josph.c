#include <stdio.h>

void josph(int str[],int n,int k)
{
   int i,flag;

   for(i = 1; i <= n; i++) {
	   str[i] = i;
   }
   for(i = 1; i <= n; i++)  {
      if ((str[i] % k == 0)&&(str[i] != 0)) 
		  		  str[i] = 0;
		          printf("str[i] out : \n",str[i]);
	  if(((str[i] % (k+1) != 0)||(str[i] % (k+2) != 0))&&(str[i] != 0))
		  str[i] = 0;
		  printf("str[i] out : \n",str[i]);
	  if(((str[i] % (2*k+1) != 0)||(str[i] % (2*k) != 0)||(str[i] % (2*k+2) != 0)||(str[i] % (2*k) != 0))&&(str[i] != 0))
		  str[i] = 0;
		  printf("str[i] out :\n",str[i]);
		if()
	    
   }

}

int main(void)
{
    int str[100];

    josph(str,100);
   
	return 0;
}
