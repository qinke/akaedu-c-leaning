#include <stdio.h>
#include <stdlib.h>

#define N    100
#define OUT  3

typedef struct node *link;

struct node
{
    int id;
    link next;
    link prev;
};

link make_node(int id)
{
    link p;

    p = malloc(sizeof *p);

    p->id = id;
    p->next = NULL;
    p->prev = NULL;

    return p;
}

link head = NULL;

link tail = NULL;

void insert_tail(link p)
{
    //first insert
    if(head == NULL)
    {
        head = tail = p;
        head->next = head;
        head->prev = head;
        return ;
    }
    //next insert (only one node head == tail)
    if(head == tail)
    {
        tail = p;
        head->next = tail;
        head->prev = tail;

        tail->next = head;
        tail->prev = head;

        return;
    }

    //head != tail , at least 2 node
    tail->next = p;
    //  tail->prev = tail->prev;   tail->prev不变
    p->next = head;
    p->prev = tail;

    tail = p;

    return ;
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

#if 0
    p = t;
    while(p->next != t)
    {
        printf("p->id = %d\n", p->id);
        p = p->next;
    }
    printf("p->id = %d\n", p->id);//没有上面的写法好
#endif

    return;
}

void delete(link p)
{
    if(head->next == head)
    {
        head = tail = NULL;
        free(p);
        return ;
    }
    if(p == head)
    { 
        //only 2 node (head and tail)
        if(head->next == tail)
        {
            head = tail;
            tail->next = tail;
            tail->prev = tail;
        }

        else
        {
            head->next->prev = head->prev;
            //head->next->next 不变
            tail->next = head->next;
            //tail->prev 不变
            head = head->next;
        }

    }

    else
    {
        p->prev->next = p->next;
        p->next->prev = p->prev;

        if(p == tail)
            tail = p->prev;
    }

    free(p);
    return ;
}

int main(void)
{
    int i = 0;
    int step = 0;
    int countoff = 0;
    link p;
    printf("demo Josephus  ring\n");

    //创建链表
    for(i = 0; i < N; i++)
    {
        p = make_node(i+1);
        insert_tail(p);
    }

    //print all list id
    traverse(head);
    //begin to loop
    p = head;
    step = 0;
    countoff = 0;
    while(head != NULL)
    {
        link out;
        step++;
        //        printf("step %d:  %d\n",step, p->id);

        countoff++;
        printf("step %d:  %d countoff : %d\n", step, p->id, countoff);
        link save;
        save = p;
        p = p->next;

        if(countoff == OUT)
        {
            countoff = 0;
            //kick save out
            printf("who is out %d\n", save->id);
            delete(save);
        }
    } 

    return 0;
}
