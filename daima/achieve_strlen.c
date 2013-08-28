#include <stdio.h>
#include <string.h>

int my_strlen_fir(char s[])
{
	int i = 0;
	int len = 0;

	while(s[i++])
		len++;

		return len;
}

int my_strlen_sec(char s[])
{
	int len = 0;
	for(; (*s != '\0'); s++)
		len++;

		return len;
}

int my_strlen_thi(char s[])
{
	int len = 0;
	for(; *s; s++)
		len++;

		return len;
} 

int my_strlen_for(char s[])
{
	int len = 0;
	for(; *s++; )
		len++;

		return len;
	}

	int main(int argc, const char *argv[])
	{
		char str[] = "hello world";

		printf("strlen(str) = %d\n", strlen(str));
		printf("my_strlen_fir(str) = %d\n", my_strlen_fir(str));
		printf("my_strlen_sec(str) = %d\n", my_strlen_sec(str));
		printf("my_strlen_thi(str) = %d\n", my_strlen_thi(str));
		printf("my_strlen_for(str) = %d\n", my_strlen_for(str));

		return 0;
	}
