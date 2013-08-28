/*
*filename:switch-case.c
*
*function:switch-case complete + - * / %
*
*author:YourName
*
*date:2011-10-26
*
*/


#include <stdio.h>

 int main(int argc,char *argv[])
 {
	 int a,b;
	 char c;

printf("please input(num1+num2):");
scanf("%d %c %d",&a,&c,&b);
switch(c)
{
	case '+':
	printf("%d %c %d=%d\n",a,c,b,a+b);
	break;
	case '-':
	printf("%d %c %d=%d\n",a,c,b,a-b);
	break;
	case '*':
	printf("%d %c %d=%d\n",a,c,b,a*b);
	break;
	case '/':
	printf("%d %c %d=%d\n",a,c,b,a/b);
	break;
	case '%':
	printf("%d %c %d=%d\n",a,c,b,a%b);
	break;
	default:
	printf("Invalid input!\n");
	break;
}



 return 0;
 }
