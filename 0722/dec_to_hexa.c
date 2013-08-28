#include <stdio.h>
char dec_to_hexa(int dec,char hexa[])
{
   int i=0,n;
   char tmp[16];
   while(dec)
   {
	   if(dec%16>9)
		  { tmp[i]=dec%16-10+'A';}
		  else
			  {tmp[i]=dec%16+'0';}
			  dec=dec/16;
			  i++;
   }
   n=--i;
   for(;i>=0;i--)
	   hexa[n-i+2]=tmp[i];
	   hexa[0]='0';
	   hexa[1]='x';
	   hexa[n+1]='\0';
	   return hexa;
}
int main(void)
{
	char hexa[16];
	int dec;
	printf("input a decimal: ");
	scanf("%d",&dec);
	dec_to_hexa(dec,hexa);
	printf("hexadecimal is %s\n",hexa);
	return 0;
}
