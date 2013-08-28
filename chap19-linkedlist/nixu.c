#include <stdio.h>
#include <stdlib.h>

#define N 100

typedef struct node *link;

struct node
{
    int id;
    link next;
    link pre;
};

link make_node(int id)
{
    link p;

    p = malloc(sizeof *p);
    p->id = id;
    p->next = NULL;
    p->pre = NULL;

    return p;
}

link head = NULL;
link tail = NULL;

void insert_head(link p)
{
     //first insert
    if(head == NULL)
    {
        head = tail = p;
        head->next = head;
        head->pre = head;

        return;
    }

    //next insert  (only one node head == tail)
    if(head == tail)
    {
        tail = head;
        head->pre = p;
        head->next = p;

        p->pre = head;
        p->next = head;
        
        head = p;
        
        return ;
    }
    //head != tail, at least 2 node
    head->pre = p;
    //head->next不变
    p->next = head;
    p->pre = tail;

    tail->next = p;
    //tail->pre不变
    head = p;

    return;
}

void traverse(link t)
{
    link p;

    if(t == NULL)
     return ;

    p = t;
    do {
        printf("p->id = %d\n", p->id);
        p = p->next;
    }while(p != t);

    return ;
}

int main(void)
{
    int i = 0;
    link p;

    printf("demo inverst linkedlist \n");

    //创建链表
    for(i = 0; i < N; i++)
    {
        p = make_node(i+1);
        insert_head(p);
    }

    //print all list id
    traverse(head);

    return 0;
}
