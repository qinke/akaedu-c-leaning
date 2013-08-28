#include <stdio.h>
int hexa_to_dec(char hexa[])	
{
	int i,n,res=0;
	for(i=0;hexa[i]!='\0';i++);
	n=--i;
	for(;i>=0;i--)
	{
		if(hexa[i]>9)
	   res=res+(hexa[i]-'A'+10)*(4<<(n-i));
	    else
     	res=res+(hexa[i]-'0')*(4<<(n-i));
	}
		return res;
}
int main(void)
{
	char hexa[16];
	int dec;
	printf("input a hexadecimal: ");
	scanf("%s",hexa);
	dec=hexa_to_dec(hexa);
	printf("decimal is %d\n",dec);
	return 0;
}
