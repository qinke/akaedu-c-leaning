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
       for(j = 0; j < len - i; j++)
           if(a[j+1] < a[j])
               swap(&a[j+1], &a[j]);
   
   return;
}

int main(void)
{
    int a[N];

    init_array(a, N);

  //  show_array(a, N);

    bubble_sort(a, N);

    //show_array(a, N);

    return 0;
}
