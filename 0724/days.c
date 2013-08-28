#include  <stdio.h>
int month_day(int m)
{
	int year;
	switch(m)
	{
		case 1:
			return (31);
		case 3:
			return (31);
		case 5:
			return (31);
		case 7:
			return (31);
		case 8:
			return (31);
		case 10:
			return (31);
		case 12:
			return (31);
		case 4:
			return (30);
		case 6:
			return (30);
		case 9:
			return (30);
		case 11:
			return (30);
		case 2:
			{
				if(((year % 4 == 0)&&(year % 100 !=0))||(year % 400 == 0))
				return(29);
				else 
				return(28);
			}
	}
}
int main(void)
{
	int d,m;
	int year,month,day;
	printf("input year,month,day: ");
	scanf("%d,%d,%d",&year,&month,&day);
	for(d=0,m=1;m<month;m++)
		d += month_day(m);
	day = day + d - 1;
	printf("num is: %d\n",day);
	return 0;
}

