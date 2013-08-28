#ifndef __STACK_H_
#define __STACK_H_
void push(int iterm);
int pop(void);
int is_empty(void);
int is_full(void);
int init_stack(int sz);
void destroy_stack(void);
#endif
