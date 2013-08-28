#include <stdio.h>
#include <string.h>
/*
   void reversed_order(char str[])
   {
   char tmp;
   int len, i;
   len = strlen(str);
   for (i = 0; i != len/2; i++)
   {
   tmp = str[i];
   str[i] = str[len-1 - i];
   str[len-1-i] = tmp;
   }
   }
 */

char *reversed_order(char str[])
{
	char str1[1000];
	int i, len;
	len = strlen(str);
	for (i = 0; i < len; i++)
		str1[i] = str[len-1-i];
	str1[i] = '\0';
	strcpy(str, str1);
	return str;
}
int main(void)
{
	char str[] = "helloworld";
	printf("%s\n", str);
	printf("%s\n",reversed_order(str));
	return 0;
}
