#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node 
{
    char item;
    int l;
    int r;
};
struct node a[] = {{'a', 1, 2}, {'b', 3, 4}, {'c', 5, 6}, {'d', -1, -1},{'e', -1, -1}, {'f', -1, -1}, {'g', -1, -1}};

static  struct node  *stack;
static int top;
static int size;


int init(int sz)
{
    size = sz;
    stack = malloc(size * sizeof(*stack));
    if(!stack)
        return -1;
    return 0;
}

void desory(void)
{
    free(stack);
}

void push(struct node  ch)
{
    if(top == size)
    {
      size += size;
      stack = realloc(stack, size *  sizeof(*stack));
    }
    stack[top++] = ch;
}

struct node  pop(void)
{
    return stack[--top];
}

int  is_empty(void)
{
    return top == 0;
}

int is_full(void)
{
    return top == size;
}

void dep_travel(int index)
{
    push(a[index]);
    if(a[index].r != -1)
        dep_travel(a[index].r);
    if(a[index].l != -1)
        dep_travel(a[index].l);
}


int main(void)
{
    struct node t;
    init(20);
    length_travel(0);
    while(!is_empty())
    {
        t = pop();
        putchar(t.item);
    }
    putchar('\n');

    return 0;
}
