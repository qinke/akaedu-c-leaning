#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, j;

	for(i = 0; i < 4; i++ )
		{
			for(j = 0; j < 10; j++) {
				printf("(i,j) = (%d,%d)\n", i, j);
				if(2 == j)
//					break;
					goto out;
		}
		}
out:
        return 0;
}
