#include <stdio.h>
#include <stdlib.h>

int global = 200;
const int myconst = 300;
static int mystatic = 400;

int main(void)
{
    int local = 100;

	printf("&local = %p\n",&local);
	printf("&global = %p\n",&global);

   	printf("&const = %p\n",&myconst);
	printf("&mystatic = %p\n",&mystatic);
	printf("const string = %p\n","hello");
	printf("malloc = %p\n",malloc(2000));
    printf("main = %p\n",main);


	while(1) ;

	return 0;
}
