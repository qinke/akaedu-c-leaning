#include <stdio.h>

void newline()
{
  printf("\n");
}

void threeline()
{
  newline();
  newline();
  newline();
}

int main(void)
{
	printf("three lines: ");
   threeline();
   printf("another three lines: ");
   threeline();
   return 0;
}
