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
	struct STU a[3];
	int i,len;
	//	char ch;
	char str[100];
	for(i=0;i<3;i++)
	{
		//	scanf("%s%c%d%c%c%c",a[i].name,&ch,&a[i].id,&ch,&a[i].sex,&ch);

		/*	fgets(p[i].name,sizeof(p[i].name),stdin);
			len=strlen(p[i].name);
			p[i].name[len-1]='\0';
		 */
		fgets(str,sizeof(a[i].name),stdin);
		len=strlen(str);
		str[len-1]='\0';
		strcpy(a[i].name,str);

		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len-1] = '\0';
		a[i].id=atoi(str);

		fgets(str,sizeof(str),stdin);
		a[i].sex=str[0];

	}
	for(i=0;i<3;i++)
		printf("a[i].name = %s,a[i].id = %d,a[i].sex = %c\n",a[i].name,a[i].id,a[i].sex);
	return 0;
}
