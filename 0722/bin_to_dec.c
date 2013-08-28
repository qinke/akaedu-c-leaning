#include <stdio.h>
int bin_to_dec(char bin[])   //"1010"\0
{
	int i, n, res  = 0;

	for (i = 0; bin[i] != '\0'; i++)
		;
	n = --i;
	for (; i >= 0; i--)
		res = res + (bin[i]-'0') * (1<<(n-i));	

	return res;
}
int main(void)
{
	char bin[32];
	int dec;
	printf("Please input binary:\n");
	scanf("%s", bin);
	dec = bin_to_dec(bin);
	printf("decimal is %d\n", dec);
	return 0;
}
