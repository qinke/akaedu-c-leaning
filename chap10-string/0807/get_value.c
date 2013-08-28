#include <stdio.h>
#include <stdlib.h>

int get_value(int *key);

int main(int argc, char*argv[])
{
	int num = -1;
	int key = get_value(&num);
	fprintf(stdout, "num = %d\n", num);
	fprintf(stdout, "key = %d\n", key);
	return 0;
}

int get_value(int *key)
{
	*key = 8;
	return *key;
}
