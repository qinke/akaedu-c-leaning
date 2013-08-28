#include <stdio.h>

struct record
{
    int line;
    char fn[64];
};

typedef struct record record_t;

int main(int argc, char *argv[])
{
    FILE *fp;
    record_t max, tmp;
    char nouse[64];

    printf("demo max line\n");

    fp = fopen(argv[1], "r");

    max.line = 0;
    while(1)
    {
        int ret;
        char buf[128] = "";
        char *p;

        p = fgets(buf, 128, fp);

        ret = fscanf(fp, "%d %s". &tmp.line, tmp.fn);
        printf("ret = %d\n", ret);
        printf("line = %d, fn : <%s>\n", tmp.line, tmp.fn);

        if(ret < 0)
            break;
        if(tmp.line > max.line)
            max = tmp;
    }
    printf("max line = %d, fn : <%s>\n", max.line, max.fn);

    return 0;
}
