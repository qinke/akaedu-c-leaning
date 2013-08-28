#include <stdio.h>

int main(void)
{
//	char buf[64];
#define N 4
     char buf[N];
//	gets(buf);
//	scanf("%s",buf);
    fgets(buf ,N+16, stdin );
//	fgets(buf,N,stdin);
	printf("buf = <%s>\n",buf);
    printf("hello world\n");
	scanf("%s",buf);
	printf("printf<%s>\n",buf);
    while(1);
    
	return 0;
}
