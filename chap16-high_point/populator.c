#include <stdio.h>
#include <string.h>
#include "populator.h"



typedef struct
{
    int number;
    char msg[20];
}unit_t;
#if 0

extern void set_unit(unit_t *);

void set_unit(unit_t *p)
{
   if(p == NULL)
       return ;
   p->number = 3;
   strcpy(p->msg, "Hello  World!");
}
#endif
#if 1
unit_t set_unit(unit_t *p)
{
    if(p == NULL)
        return ;
    p->number = 3;
    strcpy(p->msg, "hello world!");
    return p;
}
#endif

#if 0
void set_unit(unit_t p)
{
    p.number = 3;
    strcpy(p.msg,  "hello world!");
}
#endif
int main(void)
{
     unit_t  u, p;
     
     u = set_unit(p);
    //set_unit(&u);
  //  unit_t u;

 //   set_unit(u);
    printf("number: %d\nmsg: %s\n", u.number, u.msg);
    return 0;
}
