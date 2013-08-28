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

int main(void)
{
    int a[N];

    init_array(a, N);

  //  show_array(a, N);

    select_sort(a, N);
   
   // show_array(a, N);

    return 0;
}
