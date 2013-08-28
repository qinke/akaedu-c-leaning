#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int i,len;
	char ch;
	len=strlen(len);
	for(i=0;i<len;i++)
		str[i]=str[len-1-i];
		str[i]='\0';
	
	printf("%s\n",str);
	return 0;
}

