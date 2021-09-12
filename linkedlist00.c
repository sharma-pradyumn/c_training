#include <stdio.h>
#include <stdlib.h>
struct node{
	int data1;
	char data2;
	struct node *next;	};
int main()
{	struct node *n1,*n2,*n3,*display;
	n1=malloc(sizeof(struct node)*1);
	n1->data1=1;
	n1->data2='A';
	n1->next=NULL;
	n2=malloc(sizeof(struct node)*1);
	n2->next=NULL;
	n1->next=n2;
	n2->data1=2;
	n2->data2='B';
	n3=malloc(sizeof(struct node)*1);
	n3->data1=3;
	n3->data2='C';
	n3->next=NULL;
	n2->next=n3;
	display=n1;
	while (display!=NULL)
	{	printf("%d\n",display->data1);
		printf("%c\n",display->data2);
		display=display->next;	}
	return 0;}
