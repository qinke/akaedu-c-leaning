#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "two_pointer.h"

typedef struct
{
    int number;
    char *msg;
}unit_t;

extern void alloc_unit(unit_t **);
extern void free_unit(unit_t *);

void alloc_unit(unit_t **pp)
{
    unit_t *p = malloc(sizeof(unit_t));
    if(p == NULL)
    {
        printf("out of memory\n");
        exit(1);
    }

    p->number = 3;
    p->msg = malloc(20);
    strcpy(p->msg, "hello world!");
    *pp = p;
}

void free_unit(unit_t *p)
{
    free(p->msg);
    free(p);
}

int main(void)
{
    unit_t *p = NULL;

    alloc_unit(&p);
    printf("number: %d\nmsg : %s\n", p->number, p->msg);
    free_unit(p);
    p = NULL;
    return 0;
}
