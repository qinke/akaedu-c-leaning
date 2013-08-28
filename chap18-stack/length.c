#include <stdio.h>
#include <stdlib.h>

struct node
{
    char item;
    int l;
    int r;
};
struct node a[] = {{'a', 1, 2}, {'b', 3, 4}, {'c', 5, 6}, {'d', -1,-1}, {'e', -1, -1}, {'f', -1, -1}, {'g', -1, -1}}; 
static struct node *queue;
static int size;
static int qc = 0;
static int h, t;

void init(int sz)
{
    size = sz;
    queue = malloc(size * sizeof(*queue));
    h = t = qc = 0;
}

void destroy(void)
{
    free(queue);
}

void enqueue(struct node item)
{
    queue[t++] = item;
    t %= size;
    qc++;
}

struct node dequeue(void)
{
    struct node ch = queue[h++];
    h %= size;
    qc--;
    return ch;
}

int is_empty(void)
{
    return qc == 0;
}

int is_full(void)
{
    return  qc == size;
}

int i = 0;
void length_travel(int index, char b[])
{
    struct node t;
    enqueue(a[index]);
    while(!is_empty())
    {
      t = dequeue();
      b[i++] = t.item;
      if(t.l != -1)
          enqueue(a[t.l]);
      if(t.r != -1)
          enqueue(a[t.r]);
    }
    b[i] = '\0';
}

int main(void)
{
    char b[20];
    init(20);
    length_travel(0, b);
    puts(b);

    return 0;
}
