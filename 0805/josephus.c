#include <stdio.h>

int josephus(int a, int b)
{	
	int i, j = 0, k = 0, temp,sum,m;
	int p[200] = {0};

	sum = a;
	for(i = 0; i < a; i++)
		p[i] =  1;
	for(i = 0; i < a; i++, k++){
		if(p[i] == 1){
			j++;
			if(j == b){
				p[i] = 0;
				sum--;
				j = 0;
				if(sum == 1)
					for(m = 0; m < a; m++)
						if(p[m] == 1){
							temp = m + 1;
							return temp;
						}
			}
		}
		if(k + 1 == a)
			k = i = 0 - 1;
	}
	return temp;
}

int main(void)
{
	int a, b, s;

	printf("Please  input the totle num. and the dead num.:\n");
	scanf("%d%d",&a,&b);
	s = josephus(a , b);
	printf("the alive  is num.:%d\n", s);

	return 0;

}
