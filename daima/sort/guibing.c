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

void merge(int a[], int l, int m, int r)
{
    int i , j, k, b[r+1];
    for(i = l; i <= r; i++)
        b[i] = a[i];
    i = l;
    j = m+1;
    k = l;
    while(i <= m && j <= r)
    {
        if(b[i] > b[j])
            a[k++] = b[j++];
        else
            a[k++] = b[i++];
    }

    while(i <= m)
        a[k++] = b[i++];
    while(j <= r)
        a[k++] = b[j++];
    return;
}

void merge_sort(int a[], int l, int r)
{
    if(l >= r)
        return;

    int m = (l+r) / 2;
    merge_sort(a, l, m);
    merge_sort(a, m+1, r);
    merge(a, l, m, r);

    return;
}

int main(void)
{
    int a[N];

    init(a, N);
    print(a, N);
    merge_sort(a, 0, N-1);
    print(a, N);

    return 0;
}
