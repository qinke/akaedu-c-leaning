#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp, *fp1;
	char buf[4096];
	char str[10];
	int len;

    if(argc < 3){
		printf("./a.out fp  fp1\n");
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
#if 0
	while(len = fread(fp, 1, sizeof(str)*2, stdin)) {
		printf("len = %d\n", len);
		fwrite(fp, 1, len, fp1);
	}
#endif

   while(len = fread(buf, 1, sizeof(buf), fp))
	   fwrite(buf, 1, len, fp1);//当磁盘空间不够时，fwrite的返回值小于len的值

	fclose(fp);
	fclose(fp1);

	return 0;
}
