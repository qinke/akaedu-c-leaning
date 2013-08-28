#include <stdio.h>
char *dec_to_bin(int dec, char bin[])
{
	int i = 0, n;
	char tmp[32];
	while (dec)
	{
		tmp[i] = '0' + dec % 2;
		dec /= 2;
		i++;
	}
	n = --i;
	for ( ; i >= 0; i--)
		bin[n - i] = tmp[i];
	bin[n+1] = '\0';
	return bin;
}
int main(void)
{
	char bin[32];
	int dec;
	printf("Please input decimal:\n");
	scanf("%d", &dec);
	dec_to_bin(dec, bin);
	printf("binary is %s\n", bin);
	return 0;
}
