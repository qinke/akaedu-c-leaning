/*
 *filename:y_m_d.c
 *
 *function:input mm/dd/yy,output yy/mm/dd
 *
 *author:YourName
 *
 *version:0.1
 *
 *data:2011-10-26
 */


#include <stdio.h>


int main(int argc,char *argv[])
{
	int year,month,day;

	printf("Enter a data(mm/dd/yyyy):");
	scanf("%d%d%d",&month,&day,&year);
	printf("Your enterd the date:%4d/%02d/%02d\n",year,month,day);

	return 0;
}
