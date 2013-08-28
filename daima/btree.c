#include <stdio.h>
#include <stdlib.h>

struct node
{
    char item;
    struct node *l, *r;
};

typedef struct node *link;

link root = NULL;

link  make_node(char item)
{
    link p;

    p = malloc(sizeof(*p));
    p->item = item;
    p->l = NULL;
    p->r = NULL;

    return p;
}

void  traverse(link t)
{
    if(t == NULL)
        return ;
    printf("%c\n", t->item);
   // printf("(%c", t->item);
    traverse(t->l);
    traverse(t->r);
    //printf("%c)", t->item);

    return;
}

link  init(char VLR[], char LVR[], int n)
{
    link t;
    int k = 0;

    if(n <= 0)
        return NULL;

    for(k = 0; VLR[0] != LVR[k]; k++);
    t = make_node(VLR[0]);
    t->l = init(VLR+1, LVR, k);
    t->r = init(VLR+1+k, LVR+1+k , n-k-1);

    return t;
}

int main(void)
{
#if 0
   link a, b, c;

   a = make_node('a');
   b = make_node('b');
   c = make_node('c');
   
   a->l = b;
   a->r = c;
   root = a;
#endif
 
   char pre_seq[] = "421356";
   char in_seq[] = "123456";

   root = init(pre_seq, in_seq, 6);

   traverse(root);


     return 0;
 }
