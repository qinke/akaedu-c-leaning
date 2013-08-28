/*
*filename:if.c
*
*function:if/if-else
*
*data:20-11-10-26 by YourName
*
*/



int main(int argc,const char*argv[])
{
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	//if
	if(x!=0)
	{
		printf("x is nonzero.\n");
	}

//judge a num is even or odd 
	if(x%2==0)
	{
		printf("x is even.\n");
	}
	else
	{
		printf("x is odd.\n");
	}

return 0;
}
