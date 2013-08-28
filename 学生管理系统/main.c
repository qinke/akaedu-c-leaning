#include <stdio.h>

int load(int argc, char *argv[]);
int list(int argc, char *argv[]);
int sort(int argc, char *argv[]);
int find(int argc, char *argv[]);
int delete(int argc, char *argv[]);

struct cmd
{
	char name[16];
	int (*pf)(int argc, char *argv[]);
} cmds[] =
{
	"load", load,
	"list", list,
	"sort", sort,
	"find", find,
    "delete", delete
};


int main(void)
{
	printf("\nWelcome to student system V1.0\n");
	while (1)
	{
		char buf[128];
		int argc = 0;
		char * argv[8];
		int i = 0;

		printf("student$ ");
		fgets(buf, 128, stdin);
        //buf[strlen(buf) - 1] = 0;

		parse(buf, &argc, argv);
        
       // list_all();

        //sort_by_name();

        //sort_by_age();

		for (i = 0; i < sizeof(cmds)/sizeof(cmds[0]); i++)
			if (strcmp(argv[0], cmds[i].name) == 0)
				cmds[i].pf(argc, argv);
       // list_all();
	}

    return 0;
}
