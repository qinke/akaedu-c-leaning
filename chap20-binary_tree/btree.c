#include <stdio.h>
#include <stdlib.h>

struct node
{
    char item;
    struct node *l, *r;
};
typedef struct node *link;

link root = NULL;

link make_node(char item)
{
    link p;

    p = malloc(sizeof(*p));
    p->item = item;
    p->l = NULL;
    p->r = NULL;

    return p;
}

void traverse(link t)
{
    if(t == NULL)
    {
        printf("()");
        return ;
    }

#if 1
    printf("(%c", t->item);
    //前序
    //printf("t->item = %c\n", t->item);
    traverse(t->l);
    traverse(t->r);
    printf(")");
#endif

#if 0
    //后序
    traverse(t->l);
    traverse(t->r);
    printf("t->item = %c\n", t->item);
   
#endif

#if 0
    //中序
    traverse(t->l);
    printf("t->item = %c\n", t->item);
    traverse(t->r);
#endif

    return ;
}

link init(char VLR[], char LVR[], int n)
{
    link t;
    int k = 0;

    if(n <= 0)
        return NULL;

    for(k = 0; VLR[0] != LVR[k]; k++);
    t = make_node(VLR[0]);
    t->l = init(VLR+1, LVR, k);
    t->r = init(VLR+1+k, LVR+1+k, n-k-1);

    return t;
}

int  count(link t)
{
    if(t == NULL)
        return 0;
    
    int lc = count(t->l);
    int rc = count(t->r);
    return 1+lc+rc;
}

int depth(link t)
{
    if(t == NULL)
        return 0;
    int lc = depth(t->l);
    int rc = depth(t->r);

    return  1 + (lc > rc? lc : rc);
}

int mypow(int base, int pow)
{
   int ret = 1;
   int i = 0;

   for(i = 0; i < pow; i++)
       ret *= base;

   return ret;
}

int isbalanced(link t)
{
    if(t == NULL)
        return 1;
    int lc = depth(t->l);
    int rc = depth(t->r);

    if(lc - rc >= 2 || rc - lc >= 2)
        printf("t->item = %c is not balanced\n", t->item);
    if(isbalanced(t->l) == 0 || isbalanced(t->r) == 0)
        return 0;
    if(lc - rc >= 2 || rc - lc >= 2)
        return 0;

    return 1;
   
#if 0
    int lb = isbalanced(t->l);
    if(lb == 0)
        printf("t->l->item = %c is not balanced\n", t->l->item);

    int rb = isbalanced(t->r);
    if(rb == 0)
        printf("t->r->item = %c is not balanced\n", t->r->item);

    if(lc - rc >= 2 || rc - lc >= 2)
        printf("t->item = %c is not balanced\n", t->item);

    if(lb == 0 || rb == 0)
        return 0;
    if(rc - lc >= 2 || rc - lc >= 2)
        return 0;
    
    return 1;
#endif

#if 0
    if(isbalanced(t->l) == 0)
    {
        printf("t->l->item = %c is not balanced\n", t->item);
        goto ptr;
    }


    if(isbalanced(t->r) == 0)
    {
        printf("t->r->item = %c is not balanced\n", t->item);
        goto ptr;
    }

    if(lc == rc || lc -rc == 1 || rc - lc == 1)
        return 1;
ptr:
    printf("t->item = %c is not balanced\n", t->item);

    return 0;
#endif

}


link insert(link t, char key)
{
    if(t == NULL)
        return make_node(key);

    if(key > t->item)
        t->r = insert(t->r, key);//先建立节点key, 然后将t的右子树指向key，建立起
                                  //t和key之间的联系
    else if(key < t->item)  //先建立节点key,然后将t的左子树指向key,建立起t和key之间的联系
        t->l = insert(t->l, key);

    return t;
}

link search(link t, char key)
{
    if(t == NULL)
        return NULL;
    if(key > t->item)
        return search(t->r, key);//先查找，等查找结束再返回到上一级
    else if(key < t->item)
        return search(t->l, key);

    return t;
}

link delete(link t, char key)
{
    link p;
    if(t == NULL)
        return NULL;

    //delete from left subtree
    if(t->item > key)
        t->l = delete(t->l, key);

    //delete from right subtree
    else if(t->item < key)
        t->r = delete(t->r, key);
    else
    {
        //if(t->item == key)
        if(t->l == NULL && t->r == NULL)
        {
            free(t);
            t = NULL;
        }
        else if(t->l)
        {//if t has left subtree

            //replace t with the rightmost node in left subtree
            for(p = t->l; p->r; p = p->r)
                ;
                t->item = p->item;
            t->l = delete(t->l, t->item);
        }
        else
        {//if t has right subtree

            //replace t with the leftmost node in right subtree
            for(p = t->r; p->l; p = p->l)
                ;
                t->item = p->item;
            t->r = delete(t->r, t->item);
        }

    }

    return t;
}



int main(void)
{
#if 0
    //利用自己编写的程序将二叉树打印出来
    char pre_seq[] = "421356";
    char in_seq[] = "123456";

    root = init(pre_seq, in_seq, 6);
#endif 
#if 0
    //利用其他程序将二叉树打印出来
    link a, b, c;
    link e, d, f;

    printf("demo binary tree!\n");

    a = make_node('4');
    b = make_node('2');
    c = make_node('5');
    
    d = make_node('1');
    e = make_node('3');
    f = make_node('6');

    a->l = b;
    a->r = c;
    b->l = d;
   // b->r = e;
    //c->r = f;
    d->r = f;
    f->r = e;

    root = a;
#endif
  
    while(1)
    {
        char ch;
        ch = getchar();
        getchar();

        if(ch == 'q')
            break;
        root = insert(root, ch);
        printf("\\tree");
        traverse(root);
        printf("\n");
        fflush(stdout);
    }

    while(1)
    {
        char ch = getchar();
        getchar();

        if(ch == 'q')
            break;
        link p = search(root, ch);
        if(p != NULL)
            printf("%c is found\n", ch);
        else
            printf("%c is not found \n", ch);
    }

    while(1)
    {
        char ch = getchar();
        getchar();
        if(ch == 'q')
        break;

        if(search(root, ch))
        {
            printf("delete %d in tree\n", ch);
            root = delete(root, ch);
            printf("\\tree");
            traverse(root);
            printf("\n");
            
        }
    }
#if 0
    printf("\\tree");
    traverse(root);
    printf("\n");
#endif
    int ct = count(root);
    int dh = depth(root);

    printf("count = %d\n", ct);
    printf("depth = %d\n", dh);
    printf("balance = %d\n", isbalanced(root));

    if(mypow(2, dh) == ct + 1)
        printf("it is a full btree\n");
    else
        printf("it is not a full btree\n");

  
    return 0;
}
