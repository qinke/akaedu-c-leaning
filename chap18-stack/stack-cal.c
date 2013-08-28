#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *stack = NULL;
static int top;
static int size;

int  init(int sz)
{
   size = sz;
   stack = malloc(size * sizeof(*stack));
   if(!stack)
       return -1;

   return 0;
}
void destroy(void)
{
    free(stack);
}

void push(char item)
{
    if(top == size)
    {
        size += size;
        stack = realloc(stack, size * sizeof(*stack));
    }
    stack[top++] = item;
}

char pop(void)
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

int main(void)
{
   char *p;
   int a, b;
   char str[128];
   
   fgets(str, sizeof(str), stdin);

   init(100);

   p = strtok(str, " \n");
   if(!p)
   {
       printf("err input\n");
       return -1;
   }
   push(atoi(p));
   
   while(p = strtok(NULL, " \n"))
   {
       switch(*p)
       {
           case '+':
               b = pop();
               a= pop();
               push(a+b);
               break;
           case '-':
               b = pop();
               a = pop();
               push(a-b);
               break;
           case '*':
               b = pop();
               a = pop();
               push(a*b);
               break;
           case '/':
               b = pop();
               a = pop();
               push(a/b);
               break;
           default:
               push(atoi(p));
       }
   }

   printf("result  =  %d\n", pop());
   destroy();

   return 0;
}
