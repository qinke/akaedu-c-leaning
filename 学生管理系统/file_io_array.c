#include <stdio.h>
#include "public.h"
#include <string.h>
#include <stdlib.h>

stu_t students[40];
int num = 0;

void load_file(char *filename)
{
    FILE *fp;

    printf("loading file %s\n", filename);
    fp = fopen(filename, "r");

    int i = 0;
    while(1)
    {
        int ret;
        char buf[256] = "";
        char *p;

        p = fgets(buf, 256, fp);
        ret = sscanf(buf, "%s %s %d %s %s %s %s %s %s",
                students[i].name,
                students[i].cname,
                &students[i].age,
                students[i].gender,
                students[i].native,
                students[i].mobile,
                students[i].qq,
                students[i].email,
                students[i].hobby);

        if(p == NULL)
            break;

        i++;

        printf("ret = %d\n", ret);
        printf("line : %d, buf: <%s>\n", i, buf);

            }

    num = i;
    printf("all students is %d\n", num);

    return ;
}


void list_name(char *name)
{
    int i = 0;

    for(i = 0; i < num; i++)
    {
        if(strcmp(students[i].name, name) == 0)
          printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", students[i].name,  students[i].cname, students[i].age,
                  students[i].gender, students[i].native, students[i].mobile, students[i].qq, students[i].email, students[i].hobby); 
    }

    return;
}
void list_all(void)
{
    int i = 0;

    //while(students[i].name != NULL)
       for(i = 0; i < num; i++)
       {
          printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", students[i].name,  students[i].cname, students[i].age,
                  students[i].gender, students[i].native, students[i].mobile, students[i].qq, students[i].email, students[i].hobby); 
    }
       return;
}

int cmp_name(void *s1, void *s2)
{
    int i = 0;
   // printf(" = %s, s2 = %s\n", (char *)*(int *)s1, (char *)*(int *)s2);
    return strcmp(((stu_t *)s1)->name, ((stu_t *)s2)->name);
}

int cmp_age(void *s1, void *s2)
{
    int i = 0;
   // printf("s1 = %d, s2 = %d\n", (int *)*(int *)s1, (int *)*(int *)s2);
      return  ((stu_t *)s1)->age - ((stu_t  *)s2)->age ;
}

void sort_by_name(void)
{
    qsort(students, 35, sizeof(stu_t), cmp_name);

    list_all();

    return ;
}

void sort_by_age(void)
{
    int i = 0;
    qsort(students, 35, sizeof(stu_t), cmp_age);
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
        list_name(argv[2]);

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
    int i = 0;
    
    for(i = 0; i < num; i++)
    {
        if(strcmp(students[i].native, native) == 0)
        printf("%-16s %-16s %-8d %-8s %-8s %-16s %-16s %-16s %-32s\n", students[i].name,  students[i].cname, students[i].age,
                  students[i].gender, students[i].native, students[i].mobile, students[i].qq, students[i].email, students[i].hobby); 
    }

    
    return;
}

void find_hobby(char *hobby)
{
    int i = 0;
    for(i = 0; i < num; i++)
    {
        if(hobby == NULL)
            continue;
        if(strstr(students[i].hobby, hobby) != NULL)
        printf("%-16s %-16s %-6d %-8s %-8s %-16s %-16s %-16s %-32s\n", students[i].name,  students[i].cname, students[i].age,
                  students[i].gender, students[i].native, students[i].mobile, students[i].qq, students[i].email, students[i].hobby); 
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
