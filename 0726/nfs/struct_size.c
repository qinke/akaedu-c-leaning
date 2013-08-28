#include <stdio.h>
struct STU
{
	char name[20];
	int id;
	char sex;
};

typedef struct STU student;

int main(void)
{
	student a[10] = {{"xiaoqiang", 12, 'm'}};
	a[1] =  a[0];

	printf("%s\n%d\n%c\n", a[0].name, a[0].id, a[0].sex);
	printf("%s\n%d\n%c\n", a[1].name, a[1].id, a[1].sex);
	//student a[10] = {{"xiaoqiang", 12, 'm'}};

	return 0;
}

