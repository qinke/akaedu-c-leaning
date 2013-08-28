#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char*argv[])
{
	char str[] = "beijing";
	fprintf(stdout, "The whole string is %s\n", str);
	char *str1 = NULL, *str2 = NULL, *str3 = str;
#if 0
	str1 = strtok(str, "e");
	puts(str1);
	str2 = strtok(NULL, "n");
	puts(str2);
#else
	str1 = strsep(&str3, "e");
	puts(str1);
	fprintf(stdout, "left string is: ");
	puts(str3);
	str2 = strsep(&str3, "n");
	puts(str2);
	fprintf(stdout, "left string is: ");
	puts(str3);
#endif
	return 0;
}
