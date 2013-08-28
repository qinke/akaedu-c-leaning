//实现argc-argv的功能,命令行参数解释器
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parse(char *buf, int *argc, char *argv[])
{
    char *p = buf;
    *argc = 0;
    int flag = 0;

    while(*p) {
        if(flag == 0 && (*p) != ' ' && (*p) != '\n') {
            //found a alpha set header
            argv[*argc] = p;
            (*argc)++;

            flag = 1;
        }
        else
            if(flag == 1 && (*p == ' ' || *p == '\n')) {
                //set tail
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
    int argc = 0;
    char buf[128];
    int i = 0;
    int tmp;
    char *p;
    char *argv[8];

    while(1) {

        printf("myshell$$ ");
        fgets(buf, 64, stdin);
        printf("buf = <%s>\n", buf);

        parse(buf, &argc, argv);//解析
        //argc = parse(buf, argv);

        printf("argc = %d\n", argc);

        for(i = 0; i < argc; i++)
            printf("argv[%d] = %s\n", i, argv[i]);

        if(strcmp(argv[0], "add") == 0)
         printf("sum = %d\n", atoi(argv[1]) + atoi(argv[2]));

        if(strcmp(argv[0], "sub") == 0)
        printf("sub = %d\n", atoi(argv[1]) - atoi(argv[2]));
        //  p = argv[0];

        //for(i = 0; i < 20; i++)
        //printf("%c (0x%x)\n", *(p+i), *(p+i));

        for(i = 0; i < argc; i++)
            printf("argv[%d] = <0x%x> at %p\n", i, argv[i], &argv[i]);
    }

    return 0;
}
