#include "header.h"

int main()
{
/*	printf("I am in main\n");

	printf("sum coming from add file = %d\n",add(4,5));
	create_node();
	printf("Enter the "_
	return 0;
*/
int i=0,index;
	struct node *spam0,*end,*new,*start;
        printf("Enter 1 to create a node,2 to link a node at start,3 to insert node at end,\n");
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
