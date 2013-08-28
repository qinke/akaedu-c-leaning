#include<stdio.h>
#include <string.h>

struct  student
{
	unsigned short id;
	char name[10];
	int s[4];
	double ave;
};

void readrec(struct student stu[],int n)
{
	int i,j;
	char str[100];
	int len;
	double sum,tmp;	

	for(i=0;i<n;i++)
	{

		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1]='\0';
		stu[i].id = atoi(str);

		fgets(str,sizeof(str),stdin);
		len=strlen(str);
		str[len-1] = '\0';
		strcpy(stu[i].name,str);

		sum = 0;

		for(j=0;j<4;j++)
		{
			fgets(str,sizeof(str),stdin);
			len=strlen(str);
			str[len-1] = '\0';
			stu[i].s[j] = atoi(str);
			sum += stu[i].s[j];
		 
		}
		   
            tmp = sum / 4;
			stu[i].ave = tmp;
	}
}

void writerec(struct student stu[],int n)
{
	int i,j;

	for(i=0;i<n;i++)
	{
		printf("stu[i].id= %d\n",stu[i].id);
		printf("stu[i].name= %s\n",stu[i].name);
		for(j=0;j<4;j++)
		{
			printf("stu[i].s[j]= %d\n",stu[i].s[j]);
		}
		printf("stu[i].ave= %f\n",stu[i].ave);
	}
}

int main(void)
{
	int n=10;
	struct student stu[10];
	readrec( stu,n);
	writerec( stu,n);
	return 0;
}
