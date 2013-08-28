#include <stdio.h>
#include <time.h>

#define N 10
#define MAX 100

void init(int a[], int len)
{
    int i = 0;

    srand(time(NULL));
    for(i = 0; i < len; i++)
        a[i] = rand() % 100;

    return;
}

void print(int a[], int len)
{
    int i = 0;
    for(i = 0; i < len; i++)
        printf("%3d ", a[i]);
    putchar('\n');
}

void swap(int *a, int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;

    return ;
}

void insert_sort(int a[], int len)
{
    int i = 0, j = 0;
    for(i = 0; i < len-1; i++)
    {
        int tmp = a[i+1];
        for(j = i; tmp < a[j] && j >= 0; j--)
           a[j+1] = a[j];
        a[j+1] = tmp;
    }

    return;
}

int main(void)
{
    int a[N];

    init(a, N);
    print(a, N);
    insert_sort(a, N);
    print(a, N);

    return 0;
}
