#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[10];
	int id;
	char sex;
};

int main(int argc, const char *argv[])
{
    struct student stu;
	int num;
    char *p;
	p = calloc(3, sizeof(stu));
    free(p);

	return 0;
}
