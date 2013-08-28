#include <stdio.h>
#include <stdlib.h> 
#include <errno.h>

int main(int argc, const char *argv[])
{
  FILE  *fp;
  fp = fopen("abc", "w");
//fp = fopen("abc", "r");
  if (fp == NULL)
  {
//	  printf("errno = %d\n", errno);
//	  perror("fopen");
	  printf("open fail!\n");
	  exit(-1);
  }
  puts("hello");
  //fputs("hello", fp);
  fclose(fp);

  return 0;
}
