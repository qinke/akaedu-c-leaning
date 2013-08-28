#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[20] = "hello world";

//	memcpy(buf+3, buf, 10);
//    strcpy(buf+1, buf);
	strncpy(buf+3, buf, 10);
//	memmove(buf+1, buf, 13);
	printf("%s\n", buf);

	return 0;
	}
