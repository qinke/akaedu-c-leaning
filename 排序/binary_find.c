#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

//利用while循环进行折半查找（也就是二分查找）
int search(int a[], int l, int r, int key)
{
    int m = 0;

    while(l <= r)
    {
        m = (l+r) / 2;
        if(key > a[m])
            l = m + 1;
        else if(key < a[m])
            r = m -1;
        else
            return 1;
    }

    return 0;
}

//利用递归进行折半查找（也就是二分查找）
int search_r(int a[], int l, int r, int key)
{
    int m = 0;

    if(l > r)
        return 0;
    m = (l + r) / 2;
    if(key < a[m])
        return search_r(a, l, m-1, key);
    else if(key > a[m])
        return search_r(a, m+1, r, key);
    else
        return 1;
}
int main(int argc, char *argv[])
{
    int a[N];
    int key = 0 ;
    
    if(argc < 2)
        printf("./a.out key\n");
    key = atoi(argv[1]);

    init_array(a, N);

    show_array(a, N);

    bubble_sort(a, N);

    show_array(a, N);

    if(search_r(a, 0, N-1, key) == 1)
        printf("find %d\n", key);
    else
        printf("no find %d\n", key);

    return 0;
}
