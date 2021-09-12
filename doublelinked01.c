#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * prev;
	struct node * next;	};
int main()
{	int i;
	struct node *n1,*display,*current,*end,*temp;
	printf("Enter data for pointer = ");
	n1=malloc(sizeof(struct node)*1);
	scanf("%d",&n1->data);
	n1->next=NULL;
	n1->prev=NULL;
	current=n1;
/*	n2=malloc(sizeof(struct node)*1);
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
		display=display->prev;	}	*/
	for(i=0;i<5;i++)
	{	temp=malloc(sizeof(struct node)*1);
		printf("Enter data for node = ");
		scanf("%d",&temp->data);
		temp->prev=current;
		temp->next=NULL;
		current=temp;		
	}
	end=current;
	while (current!=NULL)
	{	printf("%d\n",current->data);
		current=current->prev;		}

	return 0;						}
