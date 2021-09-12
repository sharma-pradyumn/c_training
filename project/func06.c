#include "header.h"
#include <stdlib.h>
void print_forward(struct node *ptr1)
{	while (ptr1!=NULL)
	{	printf("%d ",ptr1->value);
		ptr1=ptr1->next;
	}
}