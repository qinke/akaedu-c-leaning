#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
//	char buf[5] = "hello";

//  printf("%s\n", buf);
//	char buf[8] = "hello";

    char *str = "hello world\n";
	char *p = NULL;
	p = strdup(str);

	printf("%s\n", p);
//	printf("%s\n", strchr(buf,'e'));
    
    free(p);

	return 0;
}
