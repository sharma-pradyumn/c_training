#include <stdio.h>
#include <stdlib.h>
struct node{
	int value;
	struct node * next;	};
struct node create_node()
{	struct node foo;
	printf("Enter the value of the node");
	scanf("%d",&foo.value);
	foo.next=NULL;	
	return foo;}
struct node * insert_node(struct node *ptr1)
{       struct node * new;
	new=(struct node *)malloc(1*sizeof(struct node));
	printf("Enter value of the node created.");
	scanf("%d",&new->value);
	new->next=NULL;
	ptr1->next=new;
	return new;
}
int	print_node(struct node *ptr)
{	struct node *ptr0;
	ptr0=ptr;
	while (ptr0!=NULL)
	{	printf("%d %p\n",ptr0->value,ptr0->next);
		ptr0=ptr0->next;	}
	return 0;	}
void print_reverse(struct node* start, int len)
{	int i,end;
	struct node * ptr0;
	ptr0=start;
	end=len-1;
	i=0;
	while (end>=0)
	{	i=0;
		while(i<end)
		{	ptr0=ptr0->next;
			i++;	
		}
		printf("%d\n",ptr0->value);	
		end--;
		ptr0=start;

	}
}

int main()
{	int i=0;
	struct node spam0,* current, * new, * start;
	printf("Enter 1 to create a node,2 to link a node and 3 to print and 4 to exit \n");
	scanf(" %d",&i);
	while(i!=4){
		if (i==1)
		{	spam0=create_node();
			current=&spam0;	}
		else if(i==2)
		{	//struct node spam1;
			current=insert_node(current);
		}
		else if (i==3)
		{	int len=0;
			struct node * eggs;
			eggs=&spam0;
			start=&spam0;
			while(eggs!=NULL)
			{	len++;
				eggs=eggs->next;}
			print_reverse(start,len);	}	
		scanf(" %d",&i);					}
		return 0;}

