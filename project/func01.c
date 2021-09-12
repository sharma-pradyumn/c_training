#include "header.h"
#include <stdlib.h>
struct node * create_node()
{	struct node *foo;
	foo=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter the value of the node");
	scanf("%d",&foo->value);
	foo->next=NULL;
	foo->prev=NULL;	
	return foo;	
}	