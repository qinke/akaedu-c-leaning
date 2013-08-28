#include <stdio.h>
#include <alloca.h>

#define    MAX_LEN  10

int main(int argc, char *argv[])
{
	int *p = alloca(MAX_LEN);
	int i;

	for (i = 0; i < MAX_LEN; i++)
	{
		p[i] = i;
	}
	for (i = 0; i < MAX_LEN; i++)
	{
		fprintf(stdout, "%d   ", p[i]);
	}
	fprintf(stdout, "\n");
	return 0;	
}
