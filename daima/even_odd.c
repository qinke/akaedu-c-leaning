#include <stdio.h>

#define N 10

int main(int argc, const char *argv[])
{
  int num[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
  int num_even = 0, num_odd = 0;
  int i;

  for(i = 0; i < N; i++)
  {
	  if((num[i] % 2) == 0)
		  {
		  num_even++;
		  printf("%d  ", num[i]);
       	 

		  }
 		  if((num[i] % 2) == 1)
		  {
			  num_odd++;
			  printf("%d  ", num[i]);
				  }


      }
     printf("\n");
     printf("num of even is : %d\n", num_even);
     printf("num o of odd is : %d\n", num_odd);

       return 0;
} 
