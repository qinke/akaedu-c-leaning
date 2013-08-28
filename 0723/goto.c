#include <stdio.h>
void foo(void)
{
}

int main(void)
{
	while (1)
	{
		for(; 1; )
		{
			while(1)
			{
				if (1)
					goto dest;
				break;

			}
			break;
		}
		break;
	}
dest:
	return 0;
}
