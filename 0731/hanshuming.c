#include <stdio.h>
#include <string.h>

//字符串查找，判断里面是否有‘h’
/*
   int str_ch(char str[],int n,char ch)
   {
   int	i;

   fgets(str,n,stdin);
   for ( i = 0; i < n; i++) {
   if (str[i] == ch)
   return 1;
   else
   return 0;
   }
   }
//字符串遍历，判断是否有叠字出现，统计出现的叠字为那些

char str_same_num(char str[],int n)
{
int i;

fgets(str,n,stdin);
str[n-1] = '\0';
for (i = 0; i < n - 1; i++) {
if ((str[i] - '0') == (str[i+1] - '0'))
//	return str[i];
printf("%c  ",str[i]);
else
continue;
}
printf("\n");
}


//测试一个字符串里第一个出现'  '或'\0'的位置

int str_loca(char str[],int n,char ch,int  first)

{
int		i,j=0;

//	printf("%d\n",n);
fgets(str,n,stdin);
str[n-1] = '\0';
for (i = 0; i < n - 1; i++) {
if (str[i] == ch) {
first = i;
break;
}
//		else
//			return 0;
}
//	first = b[0];
//	return first;
printf("first location is: %d \n",first);
}

//五子棋程序，判断某一个坐标位置是否可以落棋子

int loca_put(int a[][8],int n)
{
int		i,j;

for (i = 0; i < n; i++)
for (j = 0;j < 8; j++)	{
if (a[i][j] == 0) 
return 1;
else
return 0;
}
}

//计算两个数的平均数，可以是浮点类型

float avg(float a,float b,float c)
{
	c = (a + b) / 2;
	//return c;
	printf("avg = %f\n",c);
}

*/

/*
//查找替换字符串里的某个单词，如用"hello"替换掉字符串中所有的"world"

char replace_char(char a[],int n,char b[])
{
int p;
int i,j,k;
char c[20];

fgets(a,n,stdin);
a[n-1] = '\0';
printf("input char string is :%s\n",a);
printf("n = %d\n",n);
for(i = 0; i < n-1; i++)  {	
if(a[i] == ' ')
break;
}
p = i;

printf("p = %d\n",p);	
for(j = 0,k = 0; j < p, k < p; j++, k++) {
c[k] = b[j];
} 
for(i = p, k = p; i< n-1 ,k < 20; i++, k++ ) {
c[k] = a[i];
}
printf("arry  c is : %s\n",c);
strcpy(a,c);
printf("new char string is : %s\n",a);
}
 */

//判断一个字符串里是否出现了n个'x'

int str_appear_ch(char a[],int n,int ch,int m)
{
	int i,count = 0;

    fgets(a,n,stdin);
	for(i = 0; i < n; i++) {		
	if (a[i] == ch)
		count++;
	}
	if (count == m)
		return 1;
	else 
		return 0;
}


int main(void)
{
	char str[20];
	char ch = 'x';
	int t;
	//	char b[6] = {"world"};
	//	int first;
	//	int a[8][8];
	//	int m;
	//	float a = 3.6, b = 6.4, c;
	//	int  a;
	/*	char ch;*/

	//	a = str_ch(str,10,'h');
	//	printf("a = %d\n",a);

	//	 str_same_num(str,10);
	/*	printf("ch = %c\n",ch);*/

	//	str_loca(str,20,' ',first);

	// m = loca_put(a,8);
	//  printf("a = %d\n",m);

	//    avg(a,b,c);

	//	replace_char(str,20,b);
     
   t =  str_appear_ch(str,20,'x',5);
   printf("t = %d\n",t);

	return 0;
}
