#include <stdio.h>
#include <time.h>

#define N 16
#define MAX 100

void init_array(int a[], int len)
{
   int i = 0;
   srand(time(NULL));
   for(i = 0; i < len; i++)
    a[i] = rand() % MAX;

   return;
   
}

void show_array(int a[], int len)
{
  int i = 0;

  for(i = 0; i < len; i++)
      printf("%3d ", a[i]);
  putchar('\n');

  return;
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}

//冒泡排序
void bubble_sort(int a[], int len)
{
   int i = 0, j = 0;

   //上升排序，从最后往前进行比较进行排序
#if 0
   for(i = 0; i < len; i++)
       for(j = len - 1; j > i; j--)
           if(a[j-1] > a[j])
           swap(&a[j-1], &a[j]);
#endif

  //下降排序，从最前面进行比较进行排序
   for(i = 0; i < len; i++)
       for(j = 1; j < len - i; j++)
           if(a[j] < a[j-1])
               swap(&a[j-1], &a[j]);
   
   return;
}

// 选择排序
void select_sort(int a[], int len)
{
    int i = 0, j = 0, min = 0;
    
    for(i = 0; i < len; i++)
    {
        min = i;
        for(j = i+1; j < len; j++)
            if(a[min] > a[j])
                min = j;
        swap(&a[i], &a[min]);
    }

    return ;
}

//插入排序
void insert_sort(int a[], int len)
{
    int i = 0, j = 0, tmp = 0;

    for(i = 0; i < len-1; i++)
    {
        tmp = a[i+1];
        for(j = i; tmp < a[j] && j >= 0; j--)
            a[j+1] = a[j];
        
        a[j+1] = tmp;
    } 

    return ;
}

void merge(int a[], int l, int m, int r)
{
    int i, j, k, b[r+1];
    for(i = l; i <= r; i++)
        b[i] = a[i];
    i = l; 
    j = m+1;
    k = l;
    while(i <= m && j <= r)
    {
        if(b[i] < b[j])
            a[k++] = b[i++];
        else
            a[k++] = b[j++];
    }
    while(i <= m)
        a[k++] = b[i++];
    while(j <= r)
        a[k++] = b[j++];

    return;
}

//归并排序
void  merge_sort(int a[], int l, int r)
{
  int m;

  if(l >= r)
      return;
  m = (l+r) / 2;
  merge_sort(a, l, m);
  merge_sort(a, m+1, r);
  merge(a, l, m, r);

  return;
}

int partition(int a[], int l, int r)
{
    int i = 0, j = 0;
    
    for(i = l+1, j = l; i <= r; i++)
        if(a[i] < a[l])
            swap(&a[i], &a[++j]);
    swap(&a[j], &a[l]);

    return j;
}

//快速排序
void quick_sort(int a[], int l, int r)
{
    if(l >= r)
        return;
    int k = partition(a, l, r);
    quick_sort(a, l, k-1);
    quick_sort(a, k+1, r);

    return ;
}

int main(void)
{
    int a[N];

    init_array(a, N);

    show_array(a, N);

   // bubble_sort(a, N);
   // select_sort(a, N);
   // insert_sort(a, N);
   // merge_sort(a, 0, N-1);
    
    quick_sort(a, 0, N-1);

    show_array(a, N);

    return 0;
}
