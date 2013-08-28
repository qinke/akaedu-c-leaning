#include <stdio.h>
#include <time.h>

#define N 16
#define MAX 100

void init(int a[], int len)
{
    int i = 0;

    srand(time(NULL));
    for(i = 0; i < len; i++)
        a[i] = rand() % 100;
}

void show(int a[], int len)
{
    int i = 0;
    for(i = 0; i < len; i++)
    printf("%3d ", a[i]);
    putchar('\n');
}

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
#if 0
void bubble_sort(int a[], int len)
{
    int i = 0, j = 0;

    for(i = 0; i < len; i++)
        for(j = len - 1; j > i; j--)
            if(a[j] < a[j-1])
                swap(&a[j-1], &a[j]);
}

void select_sort(int a[], int len)
{
    int i = 0, j = 0;
    int min = 0;
    for(i = 0; i < len; i++)
    {
        min = i;
        for(j = i+1; j< len; j++)
            if(a[min] > a[j])
                min = j;
        swap(&a[i], &a[min]);
    }
}

void insert_sort(int a[], int len)
{
    int i = 0, j = 0;
    int tmp = 0;
    for(i = 0; i < len-1; i++)
    {
        tmp = a[i+1];
        for(j = i; tmp < a[j] && j >= 0; j--)
            a[j+1] = a[j];
        
        a[j+1] = tmp;
    }
}

void merge(int a[], int l, int m, int r)
{
    int i =0, j = 0, k = 0, b[r+1];
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
}

void merge_sort(int a[], int l, int r)
{
    int m = 0;
    if(l >= r)
        return;
    m = (l+r) / 2;

    merge_sort(a, l, m);
    merge_sort(a, m+1, r);
    merge(a, l, m, r);
}
#endif 
int  partition(int a[], int l, int r)
{
    int i  = 0, j = 0;

    for(i = l+1, j = l; i <= r; i++)
    {
        if(a[i] < a[l])
            swap(&a[i], &a[++j]);
        swap(&a[j], &a[l]);
    }

    return j;
}

void quick_sort(int a[], int l,  int r)
{
    if(l >= r)
        return;
    int key = partition(a, l, r);
    quick_sort(a, l, key-1);
    quick_sort(a, key+1, r);
}

int main(void)
{
    int a[N];

    init(a, N);
    show(a, N);
   // bubble_sort(a, N);
   //select_sort(a, N);
   //insert_sort(a, N);
   //merge_sort(a, 0, N-1);
   quick_sort(a, 0, N-1);
    show(a, N);

    return 0;
}
