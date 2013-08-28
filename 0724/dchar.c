#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[3][1024];
	int i;
	char ch;
	printf("input 3 zifuchuan: ");
	for(i=0;i<3;i++)
	{
		scanf("%s",str[i]);
		scanf("%c",&ch);
	}
	for(i=0;i<3;i++)
		printf("%s\n",str[i]);
		return 0;
}
