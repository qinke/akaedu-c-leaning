#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int i;
    int tmp;
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
     } 
 
        if(strcmp(argv[1], "add") == 0) 
        {
            tmp =atoi(argv[2]) + atoi(argv[3]);
            printf("add = %d\n", tmp);
        }

        if(strcmp(argv[1], "sub") == 0)
        {
            tmp = atoi(argv[2]) - atoi(argv[3]);
            printf("sub = %d\n", tmp);
        }
    
        if(strcmp(argv[1], "mul") == 0)
        {
            tmp = atoi(argv[2]) * atoi(argv[3]);
            printf("sub = %d\n", tmp);
        }

        if(strcmp(argv[1], "div") == 0)
        {
            tmp = atoi(argv[2]) /  atoi(argv[3]);
            printf("sub = %d\n", tmp);
        }

        if(strcmp(argv[1], "res") == 0)
        {
            tmp = atoi(argv[2]) % atoi(argv[3]);
            printf("sub = %d\n", tmp);
        }

    return 0;
}


