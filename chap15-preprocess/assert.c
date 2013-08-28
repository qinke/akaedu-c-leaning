#include <stdio.h>
//#include <assert.h>
#include <stdlib.h>

#if 1

void _myAssert(char *msg, char *func)
{
	printf("%s <%s> default!\n",msg, func);
	abort();
}

#define _STR(x)  _VAL(x)
#define _VAL(x)  #x

#define myassert(test)  (test)?(void)0 \
                        :_myAssert(__FILE__ ":" _STR(__LINE__)  " " #test, __func__ )



#endif

int main(int argc, char *argv[])
{
	int a =100;
	int b = 1;
	int *p = NULL;

    myassert(0);
//	myassert(a/b);
//	myassert(p);

//printf("ok %d\n", a/b );
	
	return 0;
}
