#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int get_value(int *p);
int get_string(char **qstr);
int get_string1(char *qstr);
//int get_string(char *qstr);

int main(int argc, char *argv[])
{
	int num = 0;
	char *pstr = malloc(100);
	//memset(pstr, 0, 20);
	get_value(&num);
	fprintf(stdout, "num = %d\n", num);

	get_string1(pstr);
	puts(pstr);
	//get_string(&pstr);
	//puts(pstr);
	return 0;
}

int get_value(int *p)
{
	return (*p = 5);
}

int get_string(char **qstr)
{
	*qstr = malloc(20);
	return strlen((strcpy(*qstr, "helloworld")));
}
int get_string1(char *qstr)
{
	return strlen((strcpy(qstr, "helloworld")));
}
