#include "header.h"
#include <stdlib.h>
void insert_node_index(struct node *ptr1,int index)
{	int i=0;
	struct node *current,*new;
	new=(struct node *)malloc(1*(sizeof(struct node)));
	printf("Enter the value of node");
	scanf("%d",&new->value);
	current=ptr1;
	for (i=0;i<index-1;i++)
		current=current->next;

	new->next=current->next;
	(current->next)->prev=new;
	current->next=new;
	new->prev=current;

}
