//将一个十六进制数的输出
#include <stdio.h>

void put_hex(int  hex)
{
	char hexs[16] = "0123456789abcdef";

	putchar(hexs[hex]);

	return ;
}

void put_char_hex(char byte)
{
	put_hex((byte>>4) & 0x0f);
	put_hex((byte>>0) & 0x0f);

	return ;
}

void put_int_hex(int num) 
{
    putchar('0');
	putchar('x');

	put_char_hex((num>>24) & 0xff);
	put_char_hex((num>>16) & 0xff);
	put_char_hex((num>>8) & 0xff);
	put_char_hex((num>>0) & 0xff);

    printf("\n");

	return  ;
}

int main(void)
{
	printf("%d\n",010);//以0开头的为八进制，以0x开头的为十六进制

	put_int_hex(100);
    
	put_int_hex(0x345678);

	return 0;
}
