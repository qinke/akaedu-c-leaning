#include <stdio.h>
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	int *di;
	const int *si;
	int r = n % 4;
	while(r--)
		*d++ = *s++;
		di = (int *)d;
		si = (const int *)s;
        n /= 4;
		while(n--)
			*di++ = *si++;

			return dest;
}

int main (void)
{
  /*
	char buf[20] = "hello world\n";

//	memcpy(buf+3, buf, 13);
    memmove(buf+1, buf, 13);
	printf("%s",buf);
*/
   char src[20] = "hello world";
   char dest[20] = "0";
    
   memcpy(dest,src,12);
   printf("%s\n",dest);

	return 0;
}
