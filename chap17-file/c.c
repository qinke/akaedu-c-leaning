#include <stdio.h>

int main(int argc, const char * argv[])
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    

	printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
	printf("%p\n", &a[100]);

	return 0;

}
