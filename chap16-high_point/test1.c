#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = &a + 1;
    int *p;  //a
    int (*p2)[10];  //&a

    p = a;
    p2 = &a;
    printf("a = %p\n", a);
    printf("&a = %p\n", &a);

    printf("a + 1 = %p\n", a+1);
    printf("&a + 1 = %p\n", &a+1);

    printf("%d, %d\n", *(a+1), *(ptr-1));
    
    printf("a = %p\n", a);
    printf("ptr = %p\n", )
    return 0;
}
