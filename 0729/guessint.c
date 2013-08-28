#include <stdio.h>
#include <string.h>
#include <time.h>

void rand_char(char a[],int n)
{
	int i,j,num =0;
	char  tmp;
	srand(time(NULL));
	a[0]= rand()%10+'0';
	for(i = 0;i < n-1;i++)
	{
		tmp = rand()%10+'0';
		//if(tmp != a[i])
		for(j = 0,num = 0;j < i;j++)
			if(tmp != a[j])
				num++;
		if(num == i)
			a[i] = tmp;
		else 
			i--;
	}
	a[i]='\0';
	/*	printf("suijishu is:\n");
		for(i = 0;i < 4;i++)
		printf("%c",a[i]);
		printf("\n");*/
}

void input_char(char str[])
{
	int i,j,len;
	printf("Please input:");
	fgets(str,100,stdin);
	len = strlen(str);
	str[len-1] = '\0';
	if(len  != 5)
	{
		printf("invalid input;\n");
		return;
	}
	for(i = 0;i < 4;i++)
		if((str[i]>= 'a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			printf("invalib input;\n");
			return;
		}

	for(i = 0;i < 4;i++)
	{
		for(j = 1;j<4-i;j++ )
			if(str[i]==str[j])
				return ;
	}
}

int compare(char a[],char str[])
{
	int i,j,count1,count2;
	count1 = count2 = 0;
	while(1/*count1 < 4 || count2 < 4*/	){
		for(i = 0;i < 4;i++) {
			for(j = 0;j < 4;j++) {
				if((a[i] == str[j]) &&( i == j))
				{	count1 += 1;
					printf("A");
				}

				else if((a[i] == str[j]) && (i != j)) {
					count2 += 1;
					printf("B");
				}
			}
		}
		printf("\n");
		if((count1 + count2) == 0)
		{
			printf("0000\n");
		}

		if(count1==4)	{	
			printf("YOU WIN!\n");
		}
		/*else if((count1 < 4) || (count2 < 4))*/
		input_char(str);
		break;
	}
}

int main(void)
{
	char a[5];
	int i;
	char str[5];
	rand_char(a,5);
	printf("suijishu is:\n");
	for(i = 0;i < 4;i++)
		printf("%c",a[i]);
	printf("\n");
	input_char(str);
	compare(a,str);

	/*	printf("Please input:");
		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len-1] = '\0';
		if(len < 5|| len > 5)
		{
		printf("invalid input;\n");
		return;
		}
		for(i = 0;i < 4;i++)
		if((str[i]>= 'a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
		printf("invalib input;\n");
		return;
		}

		for(i = 0;i < 4;i++)
		{
		for(j = 1;j<4-i;j++ )
		if(a[i]==a[j])
		return;
		}*/

	/*	for(i = 0;i < 4;i++)
		{
		for(j = 0;j < len;j++)
		{
		if((a[i] == str[j]) &&( i == j))
		{
		count1 += 1;
		if(count1==4)
		{	
		printf("YOU WIN!\n");
		return;
		}
		else
		printf("A");
		}
		else if((a[i] == str[j]) && (i != j))
		{
		count2 += 1;
		printf("B");
		}
		}
		}

		printf("\n");
		if((count1 + count2) == 0)
		{
		printf("0000\n");
		goto retry;
		}
		else if((count1 < 4) || (count2 < 4))
		goto retry;*/

	return 0;
}

