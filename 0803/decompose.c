#include <stdio.h>

void decompose(double x, int  *int_part, double *frac_part)
{
	*int_part = (int)x;
	*frac_part = x - (*int_part);
}

int main(void)
{
	double x = 3.14;
	int  int_part;
	double frac_part;

	decompose(x,&int_part,&frac_part);
	printf("int_part = %d, prac_int = %f\n",int_part,frac_part);
	
	return 0;
}
