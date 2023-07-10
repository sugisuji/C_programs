#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

void add_node(struct node**, int);
int binary_tree_size(struct node*);
void display(struct node*);
int height(struct node*);
void dlt_tree(struct node**);
int leaf_nodes(struct node*);
int diameter(struct node*);
int max_nodes(struct node*);
