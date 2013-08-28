#include <stdio.h>

#define STR "hello,"\
								"world"

int a;/* abc */int b;
//test
int c;

int main(void)
{
	printf("hello, world\n");
	printf("%s\n",STR);

	SWITCH("abc")
	{
      CASE "ABC":
	    PRINTF("this is abc\n");
		BREAK;
	  CASE "123"
	    PRINTF("this is 123\n");
		BREAK;
		DEFAULT:
		BRAEAK;
	}


	return 0;
}

