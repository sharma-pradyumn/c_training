#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * prev;
	struct node * next;	};
int main()
{	struct node *n1,*n2,*n3,*display;
	n1=malloc(sizeof(struct node)*1);
	n1->data=1;
	n1->next=NULL;
	n1->prev=NULL;
	n2=malloc(sizeof(struct node)*1);
	n2->next=NULL;
	n1->next=n2;
	n2->data=2;
	n2->prev=n1;
	n3=malloc(sizeof(struct node)*1);
	n3->data=3;
	n3->prev=n2;
	n3->next=NULL;
	n2->next=n3;
	display=n3;
	while (display!=NULL)
	{	printf("%p %d %p\n",display->prev,display->data,display->next);
		display=display->prev;	}
	return 0;}
