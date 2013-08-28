#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	int i,j,len;
	char tmp;
	printf("input a czifuchuan: ");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
		for(j=1;j<len-i;j++)
			if(str[j-1]>str[j])
			{
				tmp=str[j-1];
				str[j-1]=str[j];
				str[j]=tmp;
			}//对输出的字符进行冒泡排序
	printf("%s\n",str);
	return 0;

}

