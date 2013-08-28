#include <stdio.h>
#include <string.h>
#if 1
struct record
{
    int line;
    char fn[64];
};
typedef struct record record_t;
#endif
int main(int argc, const char *argv[])
{
    FILE *fp;
    struct record tmp, max;
    char nouse[64];
  //  int line;
   // char buf[128];
   // int max = 0;
   // char max_buf[128];

    fp = fopen(argv[1], "r");
    max.line = 0;
    while(1) {
        int ret;
#if 0
        ret = fscanf(fp, "%d %s", &line, buf);
        printf("ret = %d\n", ret);
        printf("line = %d, buf: <%s>\n", line, buf);

        if(ret < 0)
            break;
        
        if(line > max)
        {
            max = line;
            strcpy(max_buf, buf);
        }
#endif

#if 0
        char buf[128] = "";
        char *p;

        p = fgets(buf, 128, fp);

        ret = sscanf(buf, "%s %s %s %s %d %s %s %s", nouse, nouse, nouse, nouse,&tmp.line, nouse, nouse, tmp.buf);
        printf("ret = %d\n", ret);
        printf("line : %d, buf: <%s>\n", tmp.line, tmp.buf);

        if (p == NULL)
            break;
    

#endif
        ret = fscanf(fp, "%d %s", &tmp.line, tmp.fn);
        printf("ret = %d\n", ret);
        printf("line = %d, fn: <%s>\n", tmp.line, tmp.fn);

        if(ret < 0)
            break;

        if(tmp.line > max.line)
            max = tmp;

    }

  //  printf("max line = %d, filename: <%s>\n", max, max_buf);
      printf("max line = %d, fn: <%s>\n", max.line, max.fn);
    fclose(fp);

    return 0;
}
