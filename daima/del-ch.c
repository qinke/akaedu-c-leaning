#include <stdio.h>

#define N 1024

void del_ch(char s[], char ch)
{
	int i, j;

	for(i = j = 0; s[i]; i++)
	{
		if(s[i] != ch)
			s[j++] = s[i];
	}
	s[j] = '\0';
}

int main(void)
{
  char str[] = "hello akaedu!";
  char s[N];
  char ch;

  del_ch(str,'a');
  printf("after delete 'a', str = %s\n", str);

  printf("please input string and character:");
  scanf("%s %c", s, &ch);
  printf("you have inputed s = %s, ch = %c\n ", s, ch);
  del_ch(s, ch);
  printf("after delete '%c', s = %s\n", ch, s);

  return 0;

}
