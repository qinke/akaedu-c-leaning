#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct MAX
{
    int line;
    char fn[64];
};

int main(int argc, const char *argv[])
{
    FILE *fp;
    char str[128];
    struct MAX max, tmp;
    char *token;
    //char *out_ptr = NULL, *in_ptr = NULL;

    if(argc < 2) {
        printf("./a.out fp\n");
        exit(-1);
    }

    fp = fopen(argv[1], "r+");
    if(fp == NULL) {
        perror("fopen");
        exit(-1);
    }
    
    max.line = 0;
#if 0
    while(fgets(str, sizeof(struct MAX), fp)) {
         token = strtok(str, " ");
         tmp = token;
         printf("line = %d, fn: <%s>\n", tmp.line, tmp.fn);
        while(token = strtok(NULL, " ") != NULL) {
         token = strtok(str, " ");
         tmp = token;
         printf("line = %d, fn: <%s>\n", tmp.line, tmp.fn);
         if(tmp.line > max.line)
             max = tmp;
        }
    }
#endif
    while(fgets(str, sizeof(struct MAX), fp)) {
        sscanf(str, "%d %s", &tmp.line, tmp.fn);
        printf("line = %d, fn: <%s>\n", tmp.line, tmp.fn);
        if(tmp.line > max.line)
            max = tmp;
    }


    printf("max line = %d, fn: <%s>\n", max.line, max.fn);

    fclose(fp);

    return 0;
}
