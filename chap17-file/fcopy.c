#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp, *fp1;
    char ch;

    if(argc < 3) {
		printf("./a.out fp, fp1\n");
		exit(-1);
	}
	fp = fopen(argv[1], "r");
	if(fp == NULL) {
		perror("fopen fp");
		exit(-1);
	}

	fp1 = fopen(argv[2], "w");
	if(fp1 == NULL) {
      perror("fopen fp1");
	  exit(-1);
	}

	while((ch = fgetc(fp)) != EOF) {
		fputc(ch, fp1);
	    }
	
		fclose(fp);
		fclose(fp1);

		return 0;

}
