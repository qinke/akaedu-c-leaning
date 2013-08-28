#include <stdio.h>
#include <string.h>
#include <time.h>

void answer(char a[], int n)
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < n-1; i++) {
		a[i] = rand()%10 + '0';
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				i--;
				break;		
			}
		}
	}
	a[n-1] = '\0';
//	printf("%s\n", a);
}
void input(char b[],int n) 
{
	int i, j, len;
	printf("please input 4 different number:\n");
	scanf("%s", b);
	len = strlen(b);
	if (len != n-1) {
		printf("invalid input! please input again:\n");
		input(b, 5);
	}
	else {
		for (i = 0; i < n-1; i++) {
			if (b[i] >= '0' && b[i] <= '9') {
				for (j = 0; j < n-1; j++) {
					if (b[j] == b[j+1]) {
						printf("invalid input! please input again:\n");
						scanf("%s", b);
					}
				}
			}
			else {
				printf("invalid input! please input again:\n");
				input(b, 5);
			}
		}
	}
}
void compare(char a[],char b[])
{
	int i, j, m, n, l = 0,k = 0,flag = 16,t = 1;
	m = strlen(a);
	if (t) {
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if ((a[i] == b[j]) && (i == j)) {
					k++;	
				}
				else if ((a[i] == b[j]) && (i != j)) {
					l++;
				}
				else {
					flag--;
				}
			}
		}
		n = k;
		while (n) {
			printf("A");
			n--;
		}
		while (l) {
			printf("B");
			l--;
		}
		printf("\n");

		if (k == 4) {
			printf("YOU BET!\n");
			t = 0;
		}
		else if (flag == 0) {
			printf("0000\n");
			input(b, 5);
			compare(a, b);
		}
		else if (k < 4) {
			input(b, 5);
			compare(a, b);
		}
	}
}
int main(void)
{
	char a[5];
	char b[5];

	answer(a, 5);
	input(b, 5);
	compare(a, b);

	return 0;
}
