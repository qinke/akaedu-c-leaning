//用户可以在键盘上随意敲出字符，能够判断出小写字母，并将小写字母打印出来
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	int i,len;
	printf("input zifushuzu: ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
	{
	//	if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))将大小写子母都打印出来
      if((str[i]>='a')&&(str[i]<='z'))  
			printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
