#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char buf[50];
	char ch;
	int len = 0;
//	FILE *fp = NULL;
	//open_file(fp);
	/*
	fp = fopen("a.txt", "r");
	if (NULL == fp)
	{
		fprintf(stderr, "open file error!\n");
		exit(1);
	}
	*/
	int i, k = 0, count = 0, t = 0;
	char sh;

	//printf("please input a string:\n");
	//while (NULL != fgets(buf, 100, fp))
	while (NULL != fgets(buf, 50, stdin))
	{
		i = 0;
		len = strlen(buf);
		buf[len-1] = 0;
		k++;

	while (ch = buf[i++]) {
//		if (ch == '\n')
//			k++;
			if((!isalpha(ch)) && isalpha(sh))
				t++;
			 if (!isalpha(ch)) {
				 printf("\n");
				continue;
			 }
				printf("%c", ch);
				count++;
				sh = ch;
	}
	}
	printf("\n");
	printf("number = %d\nline = %d\nret = %d\n", count, k, t);
	return 0;
}
/*
int open_file(FILE *fp)
{
	fp = fopen("a.txt", "r");
	if (NULL == fp)
	{
		fprintf(stderr, "open file error!\n");
		exit(1);
	}
}		*/
