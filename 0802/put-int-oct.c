#include <stdio.h>

void put_char_oct(int oct)
{
	char octs[8] = "01234567";

	putchar(octs[oct]);

	return ;
}


void put_int_oct(int num)
{
	int i;

	putchar('0');

	for (i = 10; i >= 0; i--) {
        put_char_oct((num>>(3*i)) & 0x7);
	}

	printf("\n");

	return ;
}

int main(void)
{
	put_int_oct(72);

	return 0;
}
