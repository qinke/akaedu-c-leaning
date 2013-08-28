#include <stdio.h>
#include <string.h>
#include <time.h>

void rand_num(char a[],int n)
{
	int i,j,tmp;

	srand(time(NULL));
	a[n] =  '\0';
	a[0] = rand() % 10 + '0';
	for (i = 0; i < n - 1; i++) {
		tmp = rand() % 10 + '0';
		for (j = 0; j < i; j++) {
			if (a[j] != tmp) {
				a[i] = tmp;
			} else 	{
				i--;
				break;
			}
		}
	}
	printf("%s\n",a);
}

void input_num(char b[],int n)
{
	int i;

	printf("input 4 different num : ");
	for (i = 0; i < 5; i++) {
		scanf("%c",&b[i]);
	}
	b[4] = '\0';
/*	printf("%s\n",b);  */
}

int compare(char a[],char b[])
{
	int		len;
	int	i,j,m = 0;

	len = strlen(b);
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			if ((a[i] == b[j])&&(i == j)) {
				printf("A");	
				m++;
			 } else if ((a[i] == b[j])&&(i != j)) {
				printf("B");
			}
		}
	}
	printf("\n");
	if (m == 4)
        return 0;
	else
		return 1;
}

/* void compare_num(char a[],char b[])
   {
   input_num(b,5);
   compare(a,b);
   }
 */
int main(void)
{
	char a[5];
	char b[5];

	rand_num(a,5);
	input_num(b,5);
	while (compare(a,b))
		input_num(b,5);
/*	compare_num(a,b);  */

	return 0;
}
