#include <stdio.h>

int main(void)
{
	char buf[100];
   
    sprintf(buf,"%d %s",100,"hello");
	puts(buf);
	printf("hello,world!\n");
	printf("%.5s\n","hello,world!");
    printf("%16s\n","hello,world!");
    printf("%5s\n","hello,world!");
	printf("%5.2s\n","hello,world!");
	printf("%-5.2s\n","hello,world!");
	printf("%-16.16s % -3d %s\n","hello",21,"henan");
	printf("%2d\n",1234); //这只是一个数
	printf("%-3.2d\n",12345);
	printf("%-3.2f\n",3.1415926); //点表示有效位为2位

	return 0;
}
