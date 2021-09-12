#include "header.h"
#include <stdlib.h>
struct node * insert_node_end(struct node *ptr1)
{	
	struct node * new;
	new=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter the value of node");
	scanf("%d",&new->value);
	new->next=NULL;
	new->prev=ptr1;
	ptr1->next=new;
	return new;
}
