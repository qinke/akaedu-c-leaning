#include <stdio.h>
#include <string.h>
struct STU
{
	char name[20];
	int id;
	char sex;
};
int main(void)
{
	int i;
	char tmp;
	struct STU p[3];

	for (i = 0; i < 3; i++)
		scanf("%s%c%d%c%c%c", p[i].name, &tmp, &p[i].id, &tmp, &p[i].sex, &tmp);

	for (i = 0; i < 3; i++)
		printf("%s\t%d\t%c\n", p[i].name, p[i].id, p[i].sex);
	return 0;
}
