#include <stdio.h>
#include <string.h>

static const char *msg[] = {"Sunday", "Monday", "Tuseday", "Wednesday", 
                              "Thursday", "Friday", "Saturday"};

void get_a_day(const char **pp)//当返回的是一个地址时，它们是进行压栈，指的都是一个共同的空间，指的都是形同的变量
                                // 当返回的是一个值时，他们都是指向自己各自的变量
{
    static int i = 0;
    *pp = msg[i % 7];
    i++;
}

int main(void)
{
    const char *firstday = NULL;
    const char *secondday = NULL;
    get_a_day(&firstday);
    get_a_day(&secondday);
    printf("%s\t%s\n", firstday, secondday);

    return 0;
}
