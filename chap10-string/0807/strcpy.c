#include <stdio.h>

char *strcpy(char * dec, const char *src)
{
   char *ret = dec;
   int *s = (int *)src;
   int *d = (int *)dec;

   while(1)
   {
	   if(!((*s & 0xff) == 0 && (*s & 0xff00) == 0 && (*s & 0xff0000) == 0 && (*s & 0xff000000) == 0))
	   {
		   *d = *s;
		   d++;
		   s++;
	   }
	   else
	   {
		   *dec++ = *src++;
		   break;
		}
   }
   return ret;
}

int main(void)
{
	char src[20] = "hello world";
	char dec[20] = {0};

	strcpy(dec,src);
	printf("%s\n",dec);

	return 0;
}
