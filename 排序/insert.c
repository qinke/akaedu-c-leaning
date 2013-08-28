#include <stdio.h>
#include <time.h>

#define N 10000
#define MAX 10000

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
int main(void)
{
    int a[N];

    init_array(a, N);

   // show_array(a, N);

    insert_sort(a, N);

   // show_array(a, N);

    return 0;
}
