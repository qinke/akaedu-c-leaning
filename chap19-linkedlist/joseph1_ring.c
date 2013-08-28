#include <stdio.h>
#include <stdlib.h>

#define N    6
#define OUT  3

typedef struct node *link;

struct node
{
    int id;
    link next;
};

link make_node(int id)
{
    link p;

    p = malloc(sizeof *p);

    p->id = id;
    p->next = NULL;

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
        return ;
    }
    //next insert
    tail->next = p;
    tail = p;
    tail->next = head;

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
        head = p->next;
        tail->next = head;
    }

    else
    {
        link pre;

        //    for(pre = head; pre != NULL; pre = pre->next)
        pre = head;
        while(1)
        {
            if(pre->next == p)
            {
                pre->next = p->next;
                if(p == tail)
                    tail = pre;//将pre设置为tail
                break;
            }
            if(pre == tail)
                break;

            pre = pre->next;//相当于p = p->next;指向下一个
        }
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
