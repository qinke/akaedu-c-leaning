#include <stdio.h>
#include "public.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "file_io.h"

typedef struct node *link;
struct node
{
    stu_t student;
    struct node *next;
};

link head = NULL;
link tail = NULL;

link students[40];
//stu_t students[40];
int num = 0;

void insert_tail(link p)
{
    //first insert
    if(head == NULL)
    {
        head = tail = p;
        return ;
    }

    //next insert
    tail->next = p;
    tail = p;

    return;
}

int delete_file(link p)
{
   link pos;
   link prev = NULL;
   
   //delete pos node: pos == head
   if(pos = head)
   {
       head = pos->next;
       free(pos);
       pos = NULL;
   }
   
   if(pos = head->next)
   {
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
   }

   if(pos = head->next->next)
   {
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
   }

}

void destroy(void)
{
    link q, p = head;
    head = NULL;
    while(p)
    {
        q = p;
        p = p->next;
        free(q);
    }
}


void load_file(char *filename)
{
    FILE *fp = NULL;

    printf("loading file %s\n", filename);
    fp = fopen(filename, "r");
    if (NULL == fp)
    {
        fprintf(stderr, "open file error: %s\n", strerror(errno));
        exit(-1);
    }

    int i = 0;
    while(1)
    {
        int ret;
        char buf[256] = "";
        char *p = NULL;
        link s = NULL;

        p = fgets(buf, 256, fp);
        if(p == NULL)
             break;
       
        s = malloc(sizeof(*s));
        ret = sscanf(buf, "%s %s %d %s %s %s %s %s %s\n",
                s->student.name,
                s->student.cname,
                &s->student.age,
                s->student.gender,
                s->student.native,
                s->student.mobile,
                s->student.qq,
                s->student.email,
                s->student.hobby);

       // if(p == NULL)
         //   break;

        insert_tail(s);
        students[i] = s;
        i++;

       // printf("ret = %d\n", ret);
       // printf("line : %d, buf: <%s>\n", i, buf);

            }

    num = i;
    printf("all students is %d\n", num);

    return ;
}

void list_name(char *name)
{
   link p; 

   p =  head;
   while(p != NULL)
   {
       if(strcmp(p->student.name, name) == 0)
        printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", p->student.name,  p->student.cname, p->student.age,
                  p->student.gender, p->student.native, p->student.mobile, p->student.qq, p->student.email, p->student.hobby); 
       p = p->next;
   }

   return;
}

void list_all(void)
{
    int i = 0;

    //while(students[i].name != NULL)
       for(i = 0; i < num; i++)
       {
           link p;

           p = students[i];
           printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", p->student.name,  p->student.cname, p->student.age,
                  p->student.gender, p->student.native, p->student.mobile, p->student.qq, p->student.email, p->student.hobby); 
    }
       return;
}

int cmp_name(const void *s1, const void *s2)
{
   // printf(" = %s, s2 = %s\n", (char *)*(int *)s1, (char *)*(int *)s2);
    return strcmp(((link)*(int *)s1)->student.name, ((link) *(int *)s2)->student.name);
}

int cmp_age(const void *s1, const void *s2)
{
   // printf("s1 = %d, s2 = %d\n", (int *)*(int *)s1, (int *)*(int *)s2);
      return  ((link)*(int *)s1)->student.age - ((link) *(int *)s2)->student.age ;
}

void sort_by_name(void)
{
    qsort(students, num, sizeof(link), cmp_name);

    list_all();

    return ;
}

void sort_by_age(void)
{
    qsort(students, num, sizeof(link), cmp_age);
    list_all();
  
    return;
}
#if 0

int load(int argc, char *argv[])
{
    printf("load cmd\n");
    load_file(argv[1], students);

    return 0;
}
#endif

int list(int argc, char *argv[])
{
    printf("list cmd\n");
    
    if(argc == 1)
    list_all();
    else
        list_name(argv[1]);

    return 0;
}

int  delete(int argc, char *argv[])
{
    printf("delete cmd\n");

    if(argc == 1)
        destroy();
    else
           delete_file(argv[1]);
       return 0;
}

#if 0
int sort(int argc, char *argv[])
{
   printf("sort cmd\n");
   if(strcmp(argv[1], "name") == 0)
       sort_by_name();
   if(strcmp(argv[1], "age") == 0)
       sort_by_age();

   return 0;
}
#endif
void find_native(char * native)
{
   // int i = 0;
    link p;

    p = head;

    //for(i = 0; i < num; i++)
    while(p != NULL)
    {
        if(strcmp(p->student.native, native) == 0)
        printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", p->student.name,  p->student.cname, p->student.age,
                  p->student.gender, p->student.native, p->student.mobile, p->student.qq, p->student.email, p->student.hobby); 
        p = p->next;
    }

    
    return;
}

void find_hobby(char *hobby)
{
    link p;

    p = head;
 //   int i = 0;
   // for(i = 0; i < num; i++)
   while(p != NULL)
    {
        if(p->student.hobby == NULL)
            continue;
        if(strstr(p->student.hobby, hobby) != NULL)
        printf("%-16s %-16s %-6d %-8s %-8s %-16s %-16s %-16s %-32s\n", p->student.name,  p->student.cname, p->student.age,
                  p->student.gender, p->student.native, p->student.mobile, p->student.qq, p->student.email, p->student.hobby); 

        p = p->next;

    }

    return ;
}

#if 0
int find(int argc, char *argv[])
{
    printf("find cmd\n");

    if(strcmp(argv[1], "native") == 0)
        find_native(argv[2]);

    if(strcmp(argv[1], "hobby") == 0)
        find_hobby(argv[2]);

    return 0;
}
#endif


