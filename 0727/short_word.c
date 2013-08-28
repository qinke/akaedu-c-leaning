#include <stdio.h>
#include <string.h>

void search(char a[])
{
	int i,j=0,k=1,p,d;
	int len;
	int b[10],c[10];
	len = strlen(a);
	for(i=0;i<=len;i++)
	{
		if(a[i]== ' ' || a[i]=='\0')
		{ 
			b[j] = i;
			j++;
		}
	}
	d=j;
	c[0]=b[0];
	for(j=1;j<d;j++)
	{
		c[k]=b[j]-b[j-1]-1;
		k++;
	}
	p= c[0];
	for(k=1;k<=d;k++)
	{
		if(p>c[k])
			p=c[k];
	}
	printf("min len= %d\n",p);  
}

int main(void)
{
	char a[]="hello akaedu hi";
	search(a);
	return 0;
}
