#include <stdio.h>
#include <string.h>

struct TEACHER
{
	char name[20];
	char subject[20];
	int age;
	char sex;
};

void show_teacher(struct TEACHER p[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s\t%s\t%d\t%c\n", p[i].name, p[i].subject, p[i].age, p[i].sex);
}

void bubblesort(struct TEACHER p[], int n)
{
	int i, j;
	struct TEACHER tmp;
	for (i = 0; i < n; i++)
		for (j = 1; j < n-i; j++)
			if (p[j-1].age > p[j].age)
			{
				tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;
			}
}

void enter_teacher(struct TEACHER p[], int n)
{
	int i, len;
	char str[100];

	for (i = 0; i < n; i++)
	{
		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len-1] = '\0';
		strcpy(p[i].name, str);
	
		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len-1] = '\0';
		strcpy(p[i].subject, str);

		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len-1] = '\0';
		p[i].age = atoi(str);

		fgets(str, sizeof(str), stdin);
		p[i].sex = str[0];
	}
}
int main(void)
{
	struct TEACHER p[5];

	enter_teacher(p, 5);
	show_teacher(p, 5);
	bubblesort(p, 5);
	printf("********************\n");
	show_teacher(p, 5);

	return 0;
}
