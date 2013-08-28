#include <stdio.h>

int main(void)
{
	char ch;

	int count = 0,wc = 0, flag = 0;
	int j = 0;

	while((ch = getchar()) != EOF)
	{
     	wc++;
		char  word[32];
		if(isalpha(ch))
		{
			word[j++] = ch;
			flag = 1;
		}
		if((!isalpha(ch))&&(flag == 1))
		{
			word[j] = '\0';
			j = 0;
			flag = 0;
         	count++;
			printf("%d : word = <%s>\n",count,word);
		}
 	}
	printf("char num = %d\n",wc);


	return 0;
}
