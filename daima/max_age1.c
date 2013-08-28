#include <stdio.h>

int age_cmp(int a, int b)
{
	if(a > b)
		return a;
		else 
			return b;
}

int main(int argc, const char *argv[])
{
	int tom, bob, mike;

	printf("please input 3 ages:");
	scanf("%d %d %d",&tom, &bob, &mike);
	printf("the oldest is %d\n", age_cmp(age_cmp(tom, bob), mike));

	return 0;
}
