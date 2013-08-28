#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "<html><head><title>404 Not Found</title></head>";
	char *token = NULL;
//	char *saveptr = NULL;

//	token1 = strtok(str,"<");
//	printf("%s\n",token1);
//	token = strtok_r(str, "<>", &saveptr);

	token = strtok(str, "<>");
	while(token != NULL)
	{
		if (strcmp(token, "title") == 0)
		{
		//	token = strtok_r(NULL, "<>", &saveptr);

			token = strtok(NULL, "<>");
			puts(token);
			break;

		}
	//	token = strtok_r(NULL, "<>", &saveptr);

		token = strtok(NULL, "<>");
		//printf("%s\n",token);
    }
		return 0;
}
