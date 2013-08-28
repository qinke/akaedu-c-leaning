#include <stdio.h>

struct stu
{
  	char name[10];
	int id;
	char sex;       //sizeof(struct stu)=20
/*	
	char sex;
	int id;*/      //sizeof(struct stu)=16
    
/*	short id;
	short score;*/    //sizeof(struct stu)=14

/*	char sex;
	short a;
	char str[15];
	int id;
	char b;
	int d;*/    //sizeof(struct stu)=44
};

union AA
{
  char a;
  int b;
  char c[10];
}item;     //sizeof(item)=12

typedef struct stu student;

int main(void)
{
 /* student a[10]={{"xiaoming",12,'m'}};*/
  printf("%d\n",sizeof(struct stu));
  printf("%d\n",sizeof(union AA));
  printf("%d\n",sizeof(item));

  item.a = 'x';
  printf("%c\n",item.a);
  item.b = 97;
  printf("%d\n",item.b);
  printf("%c\n",item.a);

  return 0;
}
