#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp1, *fp2;
    char ch, buf[100];

    if(symlink(argv[1], argv[2]) == -1)
    {
        printf("the failure of the establishment of symbolic link");
        exit(0);
    }

    readlink(argv[2], buf, strlen(argv[1]));
    buf[strlen(argv[1])] = '\0';

    fp1 = fopen(buf, "r");
    fp2 = fopen(argv[3], "w");
    printf("the content of the file is: \n\n");

    while((ch = fgetc(fp1)) != EOF)
    {
        printf("%c", ch);
        fputc((int)ch, fp2);
    }

    printf("\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
    
}
