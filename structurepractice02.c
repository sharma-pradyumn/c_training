#include <stdio.h>
struct date
{	int date;
	int month;
	int year;	};
struct date add(struct date x)
{	struct date y;
	int enddate[15]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,28};
//Case1 goes to next month
		if (x.date+45<=enddate[x.month]+enddate[x.month+1])
			{	y.date=x.date+45-enddate[x.month];;
				if (x.month<12)
				{	y.year=x.year;
					y.month=x.month+1;}
				else if (x.month==12)			
				{	y.month=1;
					y.year=x.year+1;}	}
//Case2
//y.date+next+current-date=45
//ie goes to next to next month			
		
		else 
			{	y.date=45+x.date-enddate[x.month]-enddate[x.month+1];	
				if (x.month<11)
				{	y.month=x.month+2;
					y.year=x.year;	}
				else		
				{	y.month=2;
					y.year=x.year+1;}	}	
	return y;}						
int main()
{	struct date xxx,yyy;
	int a,b,c,d;
	scanf("%d %d %d",&xxx.date,&xxx.month,&xxx.year);
	yyy=add(xxx);
	printf("%d %d %d",yyy.date,yyy.month,yyy.year);
	return 0;}
