#include <stdio.h>

# define  OFF(x)   &(((struct stu*)0)->x)

#if 0

struct {
	char a;
	short b;
	int c;
	char d;
}__attribute__((packed))s;

#endif

#if 0
# pragma pack(1)
struct  stu {
	char a;
	short b;
	int c;
	char d;
} s;
#endif

struct stu {
	char a;
	short b;
	int c;
	char d;
}s;


int main(void)
{
	printf("%u\n",sizeof(s));
	printf("&a =  %p\n",OFF(a));
	printf("&b =  %p\n",OFF(b));
	printf("&c =  %p\n",OFF(c));
	printf("&d =  %p\n",OFF(d));

	return 0;
}
