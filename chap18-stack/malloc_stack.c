#include <stdio.h>
#include <stdlib.h>

static int *stack = NULL;
static int top;
static int size;


void push(int  num)
{
    if(top == size)
    {
        size += size;
        stack = realloc(stack, size * sizeof(*stack));
    }

    stack[top++] = num;
}

int  pop(void)
{
    return stack[--top];
}

int is_empty(void)
{
    return top == 0;
}

int is_full(void)
{
    return top == size;
}

void destroy(void)
{
    free(stack);
}

int init_stack(int size)
{
    stack = malloc(size * sizeof(*stack));
    if(!stack)
        return-1;
    else
        return 0;
}

int main(void)
{
    int num = 0;
    init_stack(5);
    
    while(num != 0)
    {
        scanf("%d ", &num);
        push(num);
    }
    while(!is_empty())
        printf("%d ",pop());
    printf("\n");

    return 0;
}
