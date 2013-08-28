#include <stdio.h>

void del_space(char *buf)
{
    char *p, *q;
    int flag = 0;
    p = q = buf;

    while(*p) {
        if(flag == 0 && (*p) != ' ') {
            flag =1;
            *q++ = *p;
        }
        else if(flag == 1 && (*p) != ' ') {
            flag =1;
            *q++ = *p;
            flag = 1;
        }
        else if(flag == 1 && *p == ' ') {
            flag = 0;
            *q++ = *p;
        }
        p++;
    }
    *q = *p;

    return ;
}

void parse(char *buf, int *argc, char *argv[])
{
    char *p = buf;
    *argc = 0;
    int flag = 0;

    while(*p)
    {
        if(flag == 0 && (*p != ' ' && *p != '\n'))
        {
            //found a alpha, set header
            argv[*argc] = p;
            (*argc)++;

            flag = 1;
        }
        else if(flag == 1 && (*p == ' ' || *p == '\n'))
        {
            //set tailer
            *p = '\0';

            flag = 0;
        }
        p++;
    }
    argv[*argc] = NULL;

    return ;
}

int main(void)
{
    char buf[128];
    char *p;
    int argc = 0;
    char *argv[8];
    int i =0;

    printf("demo argc argv\n");

    while(1)
    {
        printf("myshell$$ ");
        fgets(buf, 128, stdin);
        buf[strlen(buf) - 1] = '\0';
        printf("buf = <%s>\n", buf);

        del_space(buf);
        printf("buf = <%s>\n", buf);

        parse(buf, &argc, argv);
        printf("argc = %d\n", argc);

        for(i = 0; i <= argc; i++)
            printf("argv[%d] = <%s>\n", i, argv[i]);

        if(strcmp(argv[0], "add") == 0)
            printf("sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
        if(strcmp(argv[0], "sub") == 0)
            printf("sub = %d\n", atoi(argv[1]) + atoi(argv[2]));

        for(i = 0; i < argc; i++)
            printf("argv[%d] = <0x%x> at %p\n", i, argv[i], &argv[i]);
    }
        return 0;
    }

