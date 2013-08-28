#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp;
    
	fp = fopen("abc", "w");
	if(fp == NULL) {
		perror("fopen");
		exit(-1);
	}
    if(fseek(fp, 10, SEEK_SET) != 0) {
		perror("fseek");
		exit(-1);
	}

	fputc('K', fp);
	
	fclose(fp);

	return 0;
}
