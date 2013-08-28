#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	char *p;
    
    printf('\n' + 0x8048278);
	return 0;
	printf("str = %s\n",str);

	p = str;
	printf("p = %p\n", p);
	p = "world";
//	printf("p = %p\n",p);
	strcpy(p , "world");
    
	printf("str = %s\n", str);
// 	printf("*p = %d \n",*p);

	return 0;
}
