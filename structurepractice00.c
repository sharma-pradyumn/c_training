// structure bill takes in name,account number and balance.If balance is less than 1000,it will print balance and if balance is greater than
// 2000 then it will add 100 to balance and print the new balance.
// ???? why does it take one extra input of char 
#include <stdio.h>
struct	bill
{	char name[20];
	int account;
	int balance;	}	;
int print(struct bill *ptr,int len)
{	int i;
	for (i=0;i<len;i++)
	{ if ((ptr+i)->balance<200)
		printf("%s\n",(ptr+i)->name);}
	return 0;				}
int tax(struct bill *ptr,int len)
{	int i;
	for (i=0;i<len;i++)
	{	if ((ptr+i)->balance>=1000)
		{(ptr+i)->balance+=100;
		printf("%d\n",(ptr+i)->balance);}	}
	return 0;	}


int main()
{	int i,j;
	struct bill array[3];
	for (i=0;i<3;i++)
	{	scanf("%s\n",(array+i)->name);
		scanf("%d\n",&(array+i)->account);
		scanf("%d\n",&(array+i)->balance);	}
	print(array,3);
	tax(array,3);
	return 0;	}
							
