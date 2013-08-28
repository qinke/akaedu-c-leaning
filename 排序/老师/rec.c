#include <stdio.h>
void merge(int l, int r)
{
	int m;
	printf("%d %d\n", l, r);
	if (l >= r)
		return;
	m = (l+r) / 2;
	merge(l, m);
	merge(m+1, r);
}
int main(void)
{
	int res;
	merge(0, 5);
	return 0;
}
