/*
*filename:add.c
*
*function:1+2+3+...+100?
*
*author:YourName
*
*version:0.1
*
*date:2011-10-26
*
**/
#include <stdio.h>
{
  iont i,sum=0;
  for(i=1;i<=100;i++)
  {
	  sum+=i;
  }
  printf("1+2+3+...+100=%d\n",sum);
  return 0;
}
