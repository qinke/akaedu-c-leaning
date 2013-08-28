#include <stdio.h>
#include <string.h>

struct word
{
	char name[32];
	int len;
	int freq;
	char trans[64];
};

typedef struct word word_t;

#define N 16000
word_t words[N];
int wc = 0;

int find(char *a)
{
	int i = 0;

	for(i = 0; i < wc; i++)
	{
		if(strcmp(words[i].name, a) == 0)
			return i;
	}
	return -1;
}

void get_translation(char *a, char *trans)
{
	char cmd[64];
	char buf[10240];
	char *tmpfile = "t.tmp";
	FILE *fp;
	char *p;

	strcpy(cmd,"");
	strcat(cmd,"./trans.rb");
	strcat(cmd,a);
	strcat(cmd," > ");
	strcat(cmd,tmpfile);

	//printf("cmd = <%s>\n",cmd);
	system(cmd);

	fp = fopen(tmpfile,"r");
	fscanf(fp,"%s",buf);
	fclose(fp);

	//printf("buf = <%s>\n",buf);
	p = strtok(buf,"\"");
	//printf("p = <%s>\n",p);

	p = strtok(NULL,"\"");
	//printf("p = <%s>\n",p);

	strcpy(trans,p);
	return ;
}

int main(void)
{
	char ch;
	int count = 0, j = 0, i = 0;
	//	int wc = 0;
	int flag = 0;
	int length = 0;
	int max_len = 0;
	int max_freq = 0;

	while((ch = getchar()) != EOF)
	{
		char  a[32];
		int ret = 0;
		if(isalpha(ch))
		{
			a[j++] = ch;
			flag = 1;
		}
		if((!isalpha(ch)) && (flag == 1))
		{
			a[j] = '\0';
			j = 0;
			flag = 0;
			//    count++;
			ret = find(a);
			if(ret == -1)
			{
				strcpy(words[wc].name, a);
				length = strlen(a);
				words[wc].len = length;
				words[wc].freq = 1;
				wc++;

				if(length > max_len)
					max_len = length;

				strcat(a,">");
				printf("%3d : word = <%-16s len = %d\n",wc,a,length);
			}
			else
			{
				words[ret].freq++;
			}
			//		printf("%d : word = <%s>\n",count,word);
		}
		count++;
	}
	printf("max_len = %d words list here :\n",max_len);
	for( i = 0; i < wc; i++)
	{
		if(words[i].len == max_len)
			printf("word = <%s>\n",words[i].name);
	}
	printf("\n");
	int sum = 0;
	for(i = 0; i < wc; i++)
	{  
		char trans[64] = "trans";

		if(words[i].freq > max_freq)
			max_freq = words[i].freq;

		get_translation(words[i].name,trans);
		strcpy(words[i].trans,trans);

		strcat(words[i].name,">");
		printf("%3d: word = < %-16s   len:%2d  freq:%4d  (%s)\n",i+1, words[i].name, words[i].len, words[i].freq, words[i].trans);

		sum += words[i].freq;
	}

	printf("sum = %d\n", sum);
	printf("\n");
	for(i = max_freq; i >= 0; i--)
	{
		for(j = 0; j < wc; j++)
		{
			if(words[j].freq == i)
				strcat(words[j].name,">");
			printf("%3d: word = < %-16s  len = %2d, freq = %4d  (%s)\n", j+1, words[j].name, words[j].len, words[j].freq, words[j].trans);
		}
	}
	//	printf("char num = %d\n",wc);
	return 0;
}
