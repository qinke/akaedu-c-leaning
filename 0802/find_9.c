#include <stdio.h>

int find_9(int num, int digit)
{
   int count = 0;
   
   do {
      if (num % 10 == digit)
		  count++;
		  num = num / 10;
	 } while(num != 0);

	 return count;
}

int main(void)
{
	int i = 0, sum = 0;

	for(i = 1; i <= 1000; i++) {
		sum += find_9(i, 9);
    }
		printf("1-100 zhong has %d ge 9 \n",sum);

		return 0;
}
