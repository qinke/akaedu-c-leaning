#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp;
	char buf[1024];
	int len;

	fp = fopen("abc", "w");
	if(fp == NULL) {
		perror("fopen");
		exit(-1);
	}
#if 0
	while(fread(buf, 1, sizeof(buf), stdin));
	fwrite(buf, 1, sizeof(buf), fp);
#endif

#if 0
	while(len = fread(buf, 1, sizeof(buf), stdin)) {
		fwrite(buf, 1, len, fp);
		printf("len = %d\n", len);
	}
#endif

#if 1
	char str[10];
	while( len = fread(buf, sizeof(str), 1, stdin)) {
		printf("len = %d\n", len);
		fwrite(buf, sizeof(str), 1, fp);
	}
#endif

	fclose(fp);

	return 0;
}
