#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node * next;
	struct node * prev;
};
int add(int , int);
struct node * create_node();
struct node * insert_node_start(struct node *);
struct node * insert_node_end(struct node *);
void 	      insert_node_index(struct node * ,int );
void 		  print_reverse(struct node *);
void 		  print_forward(struct node *);
void 		  delete_index(struct node *,int);
