#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp, *sq;
	char buf[1024], ch, c, word[32];
	int s_count = 0, l_count =0, j;
	if (argc < 2) {
		printf("please input argv[1]:\n");
		exit(-1);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("fopen");
		exit(-1);	
	}
	while ((ch = fgetc(fp)) != EOF) {
		if (!isalpha(ch))	
			continue;
		j = 0;
		do {
			word[j] = ch;
			ch = fgetc(fp);
			j++;
		}while(isalpha(ch));
		word[j] = '\0';
		if (strcasecmp(word, "she") == 0)
			s_count++;
		else if (strcasecmp(word, "like") == 0)
			l_count++;
		else
			continue;
	}
	fclose(fp);
	printf("s_count = %d\n",s_count);
	printf("l_count = %d\n",l_count);

	return 0;
}

