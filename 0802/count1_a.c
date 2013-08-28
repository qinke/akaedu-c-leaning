//从1-100，这100个数中有多少个'1'
#include <stdio.h>

int count_bit_1(int num)
{   
	int counter = 0;
	int i;
  
    for (i = 0; i <= 32; i++) {
		if ((num & (1<<i)) == (1<<i))
			counter++;
	}
	return counter;
}


int main(void)
{
	int ret;
	int i,sum=0;

	printf("demo count bit 1 \n");

   // ret = count_bit_1(0x64);

    for(i = 1; i <= 100; i++)
	{
      ret = count_bit_1(i);
	  sum += ret;
	}

	//result = 3(0x64 = 0110 0100)
	printf("100 has %d bit 1\n",sum);
	}
