#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  *p = NULL;
    
	printf("demo malloc \n");

	printf("p = %p\n",p);
	p = malloc(4);
	printf("p = %p\n",p);
//	free(p);

//	p = malloc(16);
    p = malloc(4);
    printf("p = %p\n",p);
  //  free(p);

	p = malloc(4);
	printf("p = %p\n",p);

	printf("*p = %d\n", *p);
	p++;
	printf("*p = %d\n", *p);
	p[100] = 1324;
//	p[0x21000] = "1234";  //在heap(堆)的范围内，大小为0x21000
	printf("p[100] = %d\n", p[100]); 

/* int size;
    while(1)
	{
		scanf("%x",&size);
		p[size] = "123";
		printf("p[] = %d\n", p[size]);
	}   //求出指针p的字节长度的范围，以及最大的字节数， 堆的大小约为132K，除以4个字节之后，为33个页面。
*/     
	return 0;
}
