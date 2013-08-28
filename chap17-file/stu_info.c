#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STU
{
	char name[20];
	int id;
	char sex;
};

void  my_get(struct STU *p)
{
	int i = 0, len;
	char str[100];

	fgets(str, sizeof(str),stdin);
	len = strlen(str);
	str[len-1] = '\0';
	strncpy(p->name, str, sizeof(p->name));

	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	str[len-1] = '\0';
	p->id = atoi(str);

	fgets(str, sizeof(str), stdin);
	p->sex = str[0];

	return;
}

void my_put(struct STU *p)
{
	printf("%-10s%-4d%4c\n", p->name, p->id, p->sex);
}


int main(int argc, const char *argv[])
{
	int i, num, len, flag = 1 ;
	struct STU *s;
	char str[1024];
	int j, k;
	struct STU  *tmp;

	if(argc < 2) {
		printf("./a.out num_stu\n");
		exit(-1);
	}
    
	num = atoi(argv[1]);
	s = calloc(num, sizeof(struct STU));
	printf("please input %d student info like:\nname\nid\nsex\n", num);
	i = 0;
	while(i < num)
	{
		my_get(s+i);
		i++;
	}
	while(flag)
	{
		printf("input new student info?(yes/no)\n");
		fgets(str, sizeof(str), stdin);
		len = strlen(str);
		str[len-1] = '\0';
		if(strcmp(str, "yes") == 0)
		{
			s = realloc(s, ++num);
			printf("please input %d student info:\nname\nid\nsex\n", num);
			my_get(s+num-1);
		}

		else if(strcmp(str, "no") == 0)
			flag = 0;
			else
				continue;
	}
#if 0
	i = 0;
	while(i < num)
	{
		my_put(s+i);
		i++;
	}
#endif
	i = 0;
	while(i < num)
	{
		for(j = 0; j < num; j++) 
			for(k = 1; k < num ; k++) 
				if(strcmp((s+i+k-1)->name, (s+i+k)->name) > 0)
			{
                 *tmp = *(s+i+k-1);
                 *(s+i+k-1) = *(s+i+k);
                 *(s+i+k) = *tmp;
			}
		

		my_put(s+i);
		i++;
	}
    	free(s);

	return 0;
}
