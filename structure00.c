#include <stdio.h>
#include <stdlib.h>
struct employee
{
	int id;
	char name[20];	};
int main()
{	int i,j,x;
	struct employee *e;
	printf("Enter the number of employees\n");
	scanf("%d",&x);
	e=malloc(sizeof(struct employee)*x);
	for (j=0;j<x;j++)
	{	scanf("%d",&(e+j)->id);
		scanf("%s",((e+j)->name));}	
	for (i=0;i<x;i++)
		printf("%s %d \n",(e+i)->name,(e+i)->id);	
	return 0;
}
