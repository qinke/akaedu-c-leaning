//#include <stdio.h>
#include <stdarg.h>

char buf[16];
int myprintf(const char *format, ...)
{
    char c;
    int value = 100;
    char *p;
    //int *ap;
    va_list ap;
    
    va_start(ap, format);
    //ap = &format;
    //ap++;
    
    printf("&format = %p\n", &format);
    //printf("&v = %p\n", &v);
    
    while((c = *format++) != '\0')
    {
        if(c == '%')
        {
           c = *format++;
           switch(c)
           {
               case 'd':
                   //value = (int)*(ap++);
                   value = va_arg(ap, int);
                   sprintf(buf, "%d", value);
                   printf("%s", buf);
                   break;
                case 's':
                   //p = (char *)*(ap++);
                   p = va_arg(ap, char *);
                   printf("%s", p);
                   break;
                default:
                   break;
           }
           continue;
        }
        putchar(c);
    }

    return 0;
}

int main(void)
{

}
