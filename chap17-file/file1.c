#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp;
    char buf[1024], ch, c,word[32];
    int count = 0, count1 = 0;
    int i;

    if(argc < 2) {
        printf("./a.out fp\n");
        exit(-1);
    }

    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        perror("fopen");
        exit(-1);
    }

    while((ch = fgetc(fp)) != EOF) {
        if(!isalpha(ch))
            continue;
        i = 0;
        do {
            word[i] = ch;
            ch = fgetc(fp);
            i++;
        }while(isalpha(ch));
        word[i] = '\0';
        if(strcasecmp(word, "she") == 0)
            count++;
        else if(strcasecmp(word, "like") == 0)
            count1++;
        else
            continue;
    }

    fclose(fp);
    printf("count = %d,  conut1 = %d  \n", count, count1);

    return 0;
}
