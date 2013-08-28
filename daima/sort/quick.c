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

void partition(int a[], int l, int r)
{
  int i = 0, j = 0;
  for(i = l+1; i <= r; i++)
   if(a[i] < a[l])
       swap(&a[i], &a[++j]);
  swap(&a[j], &a[l]);

  return;
}

void quick_sort(int a[], int l, int r)
{
    if(l >= r)
        return;
    int m = partition(a, l, r);
    quick_sort(a, l, m-1);
    quick_sort(a, m+1, r);

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
