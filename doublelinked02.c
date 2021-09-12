#include <stdio.h>
#include <stdlib.h>
struct node
{
	int value;
	struct node * next;
	struct node * prev;
};
struct node * create_node()
{	struct node *foo;
	foo=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter the value of the node");
	scanf("%d",&foo->value);
	foo->next=NULL;
	foo->prev=NULL;	
	return foo;	
}	
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

void print_reverse(struct node *ptr1)
{	while (ptr1!=NULL)
	{	printf("%d",ptr1->value);
		ptr1=ptr1->prev;
	}
}
void print_forward(struct node *ptr1)
{	while (ptr1!=NULL)
	{	printf("%d",ptr1->value);
		ptr1=ptr1->next;
	}
}
void delete_index(struct node *ptr1,int index)
{	int i;
	
	for (i=0;i<index;i++)
		ptr1=ptr1->next;
	
	if ((ptr1->next!=NULL) && (ptr1->prev!=NULL))
	{	(ptr1->prev)->next=ptr1->next;
		(ptr1->next)->prev=ptr1->prev;
		free (ptr1);
	}
	else if (ptr1->next==NULL)
	{	printf("%p %p",ptr1,ptr1->next);
		(ptr1->prev)->next=NULL;
		free (ptr1);
	}
	else if (ptr1->prev==NULL)
	{	(ptr1->next)->prev=NULL;
		free (ptr1);
	}
}
int main()
{	int i=0,index;
	struct node *spam0,*end,*new,*start;
        printf("Enter 1 to create a node,2 to link a node at start,3 to insert node at end,");
        printf("4 to insert in between,5 to print in reverse, 6 to print in forward, 7 to delete an element and 8 to exit \n");	      
        scanf("%d",&i);
	while(i!=8)
	{	if (i==1)
		{	spam0=create_node();
			end=spam0;		
		}
		else if(i==2)
			spam0=insert_node_start(spam0);
		else if(i==3)
			end=insert_node_end(end);
		else if(i==4)
		{	printf("Enter the index of the new element");
			scanf("%d",&index);
			insert_node_index(spam0,index);			
		}	
		else if(i==5)
			print_reverse(end);
		else if (i==6)
			print_forward(spam0);
		else if(i==7)
		{	printf("Enter the index of element");
			scanf("%d",&index);
			delete_index(spam0,index);
		}

		scanf("%d",&i);
	}
	
	return 0;
}	



