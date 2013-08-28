#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp;
	char ch;
#if 0
	char filename[100] ;
	int i = 3;
	while(1) {
		sprintf(filename, "file%d", i);
		fp = fopen(filename, "w");
		if (fp == NULL) {
			printf("fopen fail\n");
			exit(-1);
		}
		printf("%d\n", i);
		i++;
	}
#endif
    printf("errno = %d\n", errno);
	fp = fopen("abc", "r");
	if(fp == NULL)
	{
      printf("errno = %d\n", errno);
      perror("fopen");
//	  printf("%s\n",strerror(errno));
	   exit(-1);
	}
    while((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);
		//fputs(ch, stdout);

     fclose(fp);
    
	return 0;
}
