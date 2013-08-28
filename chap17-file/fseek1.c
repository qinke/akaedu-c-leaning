#include <stdio.h> 
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp;
	char ch;
	char buf[1024];
	int len;
	if(argc < 2) {
		printf("./a.out file\n");
		exit(-1);
	}

	fp = fopen(argv[1], "w+");
	while((ch = fgetc(stdin)) != EOF)
	fputc(ch, fp);
#if 0
	/*第一种写法*/
	fseek(fp, 0, SEEK_SET);
#endif

#if 0
	/*第二种写法*/
	rewind(fp);
#endif

#if 0
	/*第三种写法*/
	len = (int)ftell(fp);
	fseek(fp, 0-len, SEEK_END);
	//fseek(fp, -len, SEEK_END);
#endif

	while(len = fread(buf, 1, sizeof(buf), fp))
		fwrite(buf, 1, len, stdout);

		fclose(fp);

		return 0;
}
