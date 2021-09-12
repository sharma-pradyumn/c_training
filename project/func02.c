#include "header.h"
#include <stdlib.h>
struct node * insert_node_start(struct node *ptr1)
{       
	struct node *new;
	new=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter value of the node created.");
	scanf("%d",&new->value);
	new->next=ptr1;
	new->prev=NULL;
	ptr1->prev=new;
	return new;
}