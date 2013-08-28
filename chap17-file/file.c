#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp, *fp1;
	char *token;
	char buf[4096];
	char str[1024];
	char *p = "she", *q = "like", *t = "she\n";
	int len;
	int count = 0, count1 = 0;

	if(argc < 3) {
		printf("./a.out fp fp1\n");
		exit(-1);
	}

	fp = fopen(argv[1], "r+");
	if(fp == NULL) {
		perror("fopen");
		exit(-1);
	}

	fp1 = fopen(argv[2], "a+");
	if(fp1 == NULL) {
		perror("fopen");
		exit(-1);
	}

	while(fgets(str, sizeof(str), fp))
	{
		token = strtok(str, " (’");  // 该对字符串切割
		if(strcasecmp(token, p) == 0)	   
		{
			count++;
		}
        if(strcasecmp(token, t) == 0)
        {
            count++;
        }
		if(strcasecmp(token, q) == 0)
		{
			count1++;
		}

		fprintf(fp1,"%s", token);
		fprintf(fp1, "\n");
		while((token = strtok(NULL, " (’")) != NULL)
		{
			if(strcasecmp(token, p) == 0)	   
			{
				count++;
			}
            if(strcasecmp(token, t) == 0)
            {
                count++;
            }
			if(strcasecmp(token, q) == 0)
			{
				count1++;
			}
			fprintf(fp1,"%s", token);
			fprintf(fp1, "\n");
		}
	}

	fclose(fp);
	fclose(fp1);
	printf("%d %d\n", count, count1);

	return 0;

}


