#include <stdio.h>
#include <string.h>

struct tearcher
{
	char name[20];
	int age;
	char sex;
	char course[10];
	char tel[20];
};

int main(void)
{
	struct tearcher tec[3];
	char str[100];
	int i,j,len;
	struct tearcher  tmp;

	for(i=0;i<3;i++)
	{
		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1]='\0';
		strcpy(tec[i].name,str);

		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1]='\0';
		tec[i].age=atoi(str);

		fgets(str,sizeof(str),stdin);
		tec[i].sex=str[0];

		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1]='\0';
		strcpy(tec[i].course,str);

		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1]='\0';
		//tec[i].tel=atoi(str);
		strcpy(tec[i].tel, str);
		 
	}

	for(i=0;i<3;i++)
		printf("tec[i].name = %s,tec[i].age = %d,tec[i].sex = %c,tec[i].course = %s,tec[i].tel= %s\n",tec[i].name,tec[i].age,tec[i].sex,tec[i].course,tec[i].tel);

	for(i=0;i<3;i++)
		for(j=1;j<3-i;j++)
		 if(tec[j-1].age > tec[j].age)
			{
				tmp = tec[j-1];
				tec[j-1]= tec[j];
				tec[j]= tmp;
			}
	for(i=0;i<3;i++)
		printf("tec[i].name = %s,tec[i].age = %d,tec[i].sex = %c,tec[i].course = %s,tec[i].tel= %s\n",tec[i].name,tec[i].age,tec[i].sex,tec[i].course,tec[i].tel);
	return 0;
}
