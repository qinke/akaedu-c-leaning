#include <stdio.h>

int main(void)
{
/*	int a = 11;
    int b = 5;

	printf("a & b = %d\n", a&b);
	printf("a && b = %d\n", a&&b);
*/
/*
  （无符号） unsigned int  a = 0xffffffff;//(有符号)int a = 0xffffffff;相当于a=-1;
	char  b = 1;

	printf("a + b = %d\n", a+b);
*/
/*
    unsigned char c = 0x0;  //如果改为char c = 0x0;在下面的那个循环将会导致无限循环，因为定义为char时，是有符号的字符，将会从-128 ——127 之间一直循环,127+1=-128,所以会出问题。

	for (c = 0x0; c < 0xff; c++)
		printf("c = 0x%x\n",c);
  */
/*
   unsigned char c = 0x0;
//   int d = 0x0;
//   short e = 0x0;
 //  char f = 0x0;
   
   unsigned int i = ~c;

   printf("c = 0x%x, i = 0x%x\n", c, i);
*/

 //  char c = 0x80;
 //  unsigned int c = 0x8000000;
  // unsigned char c = 0x80;
    int c = 0x80000000;

   printf("c = 0x%x\n", c);
   printf("c>>1 = 0x%x\n", c>>1);
  
	return 0;
}
