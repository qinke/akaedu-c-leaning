#include <stdio.h>

int main(void)
{
	char buf[128],word[32];
	int i = 0;
	char ch;
	char *p;

	fgets(buf, 20, stdin);
	puts(buf);
	while ((ch = buf[i++]) != '\0')
	{
		int j = 0;

		if(!isalpha(ch))  //isalpha(ch):判定字符ch是一个字母，包含小写字母和大写字母
			continue;
		do
		{
			word[j++] = ch;
			ch = buf[i++];
		} while(isalpha(ch));
		word[j] = '\0';
		printf("word = <%s>\n", word);

	}

}
