#include <stdio.h>
#include <string.h>

char *dec_to_bin(int dec, char bin[])
{
	int i = 0, n, p;
	char tmp[32];

	p = (~dec) + 1;
	while (p) {
		tmp[i] = '0' + p % 2;
		p /= 2;
		i++;
	}
	n = --i;
	for (; i >= 0; i--)
		bin[n - i] = tmp[i];
		bin[n+1] = '\0';
   return	bin;
}
/*
char bin_comple(char bin[])
{
   int i,len;

   len = strlen(bin);
   for(i = 0; i < len; i++) {
    bin[i] = (~ bin[i]);
	bin = bin + '1';      //bin = bin + '1';
}

   len = strlen(bin);
  for (i = 0; i < len; i++) {
	   if(bin[i] == '0')
		   bin[i] = '1';
		else if(bin[i] == '1')
			bin[i] = '0';
   }*/
 /*	    printf("bin base-minus-one's complement  is : %s\n",bin);
        bin[len-1] = bin[len-1] + '1';
        printf("bin complement is : %s\n",bin);
}
*/

int main(void)
{
	int dec;
	char bin[32];

	printf("please input a decimal : \n");
	scanf("%d", &dec);
	dec_to_bin(dec, bin);
	printf("binary complement  is : %s\n",bin);
 //   bin_comple(bin);

	return 0;
}
