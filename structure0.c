#include <stdio.h>
#include <stdlib.h>
struct employee
{
	int id;
	char name [20];
			};
int main()
{	int i,len;
	char array[100];
	char x;
	struct employee e1;
//	e1.id=1;
//	printf("%d \n",e1.id);	
	printf("Enter length of name");
	scanf("%d",&len);
	for (i=0;i<len;i++)
		scanf(" %c",&e1.name[i]);
//		printf("%c",x);
//	for (i=0;i<len;i++)
//		e1.name[i]=array[i];
	for (i=0;i<len;i++)
		printf("%c",e1.name[i]);
	printf("\n");
	return 0;
//alternative "%s",e1.name
//As strings terminate on spaces,we use %[^\n]s to terminte on newline
}
