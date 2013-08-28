//用户打印出一串字符串，里面的'a','e'各有多少个
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,count=0,len,num=0;
	char str[100];
	printf("input zifuchuan: ");
	scanf("%s",str);
	len=strlen(str);
/*	for(i=0;i<len;i++)
	{
		if(str[i]=='a')
		{
			count++;
		    continue;
		}
			if(str[i]=='e')
			{
				num++;
				continue;
            }
	}*/
	i=0;
	while(i<len)
	{
		if(str[i]=='a')
			count++;
	    else if(str[i]=='e')
			num++;
			i++;
	/*
	while(i<len)
	{
		if(str[i]=='a')
		{
			count++;
			i++;
			continue;
		}
		else if(str[i]=='e')
		{
			num++;
			i++;
			continue;
		}
		i++;
	}
	*/
	}
	printf("'a' de num is: %d\n,'e' de num is: %d\n",count,num);
	return 0;
}
