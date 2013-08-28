#include <stdio.h>

struct node
{
    char item;
    struct node *next;
};
typedef struct node *link;

link head = NULL;

int main(void)
{
   link p;
   printf("size of p = %d\n", sizeof(p));
   printf("size of *p = %d\n", sizeof(*p));
   printf("size of *p = %d\n", sizeof(struct node));
   printf("item & = %p\n", &(((link)0)->item));

   //p = &a;
   p = malloc(sizeof(*p));//不加*表示求出的是指针的长度，加*表示求出的是结构体的长度
   p->item = 'a';
   p->next = NULL;
   printf("p1 = %p\n", p);

   head = p;

   p = malloc(sizeof(*p));
   p->item = 'b';
   p->next = NULL;
   printf("p2 = %p\n", p);

   //a->b
   head->next = p;

   p = malloc(sizeof(*p));
   p->item = 'c';
   p->next = NULL;
   printf("p3 = %p\n", p);
   //a->b->c
   head->next->next = p;
#if 0  
   //1 、insert d before head
   
   p = malloc(sizeof(*p));
   p->item = 'd';
   p->next = head;
   printf("p4 = %p\n", p);

   head = p;
#endif

#if 0
  // 2 、 insert d after tail
    link tail = NULL;
    //tail = head->next->next
    p = head;
    while(p != NULL)
    {
      if(p->next == NULL)
       tail = p;
       p = p->next;

    }
    p = malloc(sizeof(*p));
    p->item = 'd';
    p->next = NULL;
    tail->next = p;
    printf("p4 = %p\n", p);

#endif

#if 0
    //3 、insert d before pos node
    link pos = head->next;
    link prev = NULL;

    p = head;
    while(p != NULL)
    {
       if(p->next == pos)
       {
          prev = p;
          break;
       }
       p = p->next;
    }
    p = malloc(sizeof(*p));
    p->item = 'd';
    p->next = pos;
    prev->next = p;
    printf("p4 = %p\n", p);

#endif

#if 0
  //4 、insert d after pos node
  link pos = head->next;
  p = malloc(sizeof(*p));
  p->item = 'd';
  p->next = pos->next; // d->c
  pos->next = p;//b->d
  printf("p4 = %p\n", p);
#endif

#if 0
  //5 、1.delete pos node: pos == head
   link pos = head;
   
   head = pos->next;
  // pos->next = head;
   free(pos);
   pos = NULL;
#endif

#if 0
  //5 、2.1.delete pos node: pos = head->next
    link pos = head->next;
    link prev = NULL;

    p = head;
    while(p != NULL)
    {
        if(p->next == pos)
        {
            prev = p;
            break;
        }
        p = p->next;
    } 
   
    prev->next = pos->next;
    free(pos);
    pos = NULL;
    
#endif

#if 0
  //5 、2.2.delete pos node: pos = head->next->next
     link pos = head->next->next;
     link prev = NULL;

     p = head;
     while(p != NULL)
     {
         if(p->next == pos)
         {
             prev = p;
             break;
         }
         p = p->next;
     }
     prev->next = NULL;
     free(pos);
     pos = NULL;

#endif

       
   // 遍历链表
    p = head;
   while(p != NULL)
   {
       printf("p->item = %c\n", p->item);
       printf("p->next = %p\n", p->next);
       p = p->next;
    }

    return  0;
}
