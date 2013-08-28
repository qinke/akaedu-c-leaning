#include <stdio.h>

#if 0
int fun(int n)
{
    if(n == 0)
        return 1;
    else
        return n * fun(n-1);
}
#endif

void merge(int l, int r)
{
    int m;
    printf("%d %d\n", l, r);
    if(l >= r )
        return;
    m = (l+r) / 2;
    merge(l, m);
    merge(m+1, r);
}

int main(void)
{
    int res;
   // res = fun(6);
   // printf("%d\n", res);
    merge(0, 5);
    return 0;
}
