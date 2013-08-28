#include <stdio.h>

int main(void)
{
  char buf[1024], word[32];
  int i = 0, j = 0, count = 0;
  char ch;
  int *p;
  
  while(buf[i] != 0 ) {
  fgets(buf,1024,stdin);
    if(p == NULL)
	  break;
     puts(buf);

   while((ch = buf[i++]) != 0) {
	  if (!isalpha(ch))
		  continue;
	  do {
		  word[j++] = ch;
		  ch = buf[i++];
	  } while(isalpha(ch));
      word[j] = '\0';
	  count++;
	   }
      printf("word = <%s>\n", word);
	  printf("word has %d ge\n",count);

  }
  return 0;
}
