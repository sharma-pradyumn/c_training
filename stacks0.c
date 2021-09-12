#include <stdio.h>
#include <stdlib.h>
struct node
{	int value;
	struct node * next;
	struct node * prev;
};
struct node * push(struct node * ptr1)
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
struct node * pop_stack(struct node * ptr)
{	struct node *temp;
	temp=ptr->prev;
	free (ptr);
	return temp;
}
struct node * deque_queue(struct node * ptr0)
{	struct node *temp;
	temp=ptr0->next;
	free(temp->prev);
	temp->prev=NULL;
	return (temp);
}
int main()
{	int len,i;
	struct node *  start,* current,*temp;
	start=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter the value of first node");
	scanf("%d",&start->value);
	start->prev=NULL;
	start->next=NULL;
	current=start;
	printf("Enter the length of list\n");
	scanf("%d",&len);
	for (i=1;i<len;i++)
		current=push(current);
	start=deque_queue(start);
	temp=start;
	while (temp!=NULL)
	{	printf("%d\n",temp->value);
		temp=temp->next;
	}
	return 0;
	
}
