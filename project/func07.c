#include "header.h"
#include <stdlib.h>
void delete_index(struct node *ptr1,int index)
{	//can delink start element but spam0(starting ptr) is not updated 
	int i;
	
	for (i=0;i<index;i++)
		ptr1=ptr1->next;
	
	if ((ptr1->next!=NULL) && (ptr1->prev!=NULL))
	{	(ptr1->prev)->next=ptr1->next;
		(ptr1->next)->prev=ptr1->prev;
		free (ptr1);
	}
	else if (ptr1->next==NULL)
	{	//printf("%p %p",ptr1,ptr1->next);
		(ptr1->prev)->next=NULL;
		free (ptr1);
	}
	else if (ptr1->prev==NULL)
	{	(ptr1->next)->prev=NULL;
		free (ptr1);
	}
}
