#include <stdio.h>
#include <string.h>

void myitoa(int x, char *p)
{
	int i = 0, j = 0;
	int tmp;

	while(x)
	{
		p[i++] = x % 10 + '0';
		x /= 10;
	}
	p[i] = '\0';
	for(i = 0, j = strlen(p) - 1; i <=j; i++, j--)
	{
		tmp = p[i];
		p[i] = p[j];
		p[j] = tmp;
	}
}

int main(int argc, const char *argv[])
{
	int x;
	char str[100];

	printf("please input an integer: ");
	scanf("%d", &x);
	myitoa(x, str);
	printf("after convert, array str is %s\n", str);

	return 0;
}
