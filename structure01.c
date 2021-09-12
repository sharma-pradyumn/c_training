#include <stdio.h>
#include <stdlib.h>
struct employee
{
	int id;
	char name[20];	};
int input(struct employee * , int);
int print(struct employee *,int);
int main()
{	int i,n;
	struct employee e1[2];
	input(e1,2);
	print(e1,2);
}
int input(struct employee *e1,int len)
{	int i;
	for (i=0;i<len;i++)
	{	printf("\nEnter the employee id and name \n");
		scanf("%d \n",&e1[i].id);
		scanf("%[^\n]%*c",e1[i].name);	}
	return 0;					}	
	
	
int print(struct employee *e1,int len)	
{	int i;
	for (i=0;i<len;i++)
	{	printf("%d ",e1[i].id);
		printf("%s\n",e1[i].name);	}
	return 0;}


