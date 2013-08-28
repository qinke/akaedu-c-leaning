#include <stdio.h>

char  is_word(char a[],int n,char b[32])
{
	int i,j,count = 0;
	
	for(i = 0; i < n; i++)	{
		if(((a[i] >= 'a')&&(a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z')))
		{
         	b[j] = a[i];
			j++;
		}
			else
			{
			count++;
		   continue;		
			if(b[j] = '\0')
			break;
			}
       printf("word is <%s> \n",b);
			}
   printf("word has %d \n",count);

}


int main(void)
{
	char buf[20],word[32];
//	char ch,a;
//	int i,conut;

    while(1)
	{
	   char *p;
	   fgets(buf, 20, stdin);
	   if(p == NULL)
		   break;
	   puts(buf);
	}
    is_word(buf,20,word); 
//	printf("%d: <%s>\n",);

	return 0;
}
