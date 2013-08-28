//从键盘输入字符，可以判断出输入的是小写字符还是大写字符还是数字或者是其它
#include <stdio.h>
int main(void)
{
	
	char a;
	printf("input a char: ");
	scanf("%c",&a);
	if((a>='a')&&(a<='z'))
		printf("input is a-z: %c\n",a);//printf("small letter\n");
	else if((a>='A')&&(a<='Z'))
		printf("input is A-Z: %c\n",a);//printf("capital\n");
	else if((a>='0')&&(a<='9'))
		printf("input is num: %c\n",a);//printf("num\n");
	else
		printf("input is fuhao: %c\n",a);//printf("others\n");
      
    
	return 0;
}
