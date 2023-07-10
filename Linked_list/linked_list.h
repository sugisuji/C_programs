#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node{
	int x;
	struct node *next;
};


void addnode_front(struct node** , int);
void addnode_gvn_pstn(struct node** , int, int);
void addnode_end(struct node** , int);
void display(struct node*);
int lnkdlst_length(struct node*);
void delete_node(struct node** , int);
void reverse_node(struct node**);
void rvrs_node_print(struct node*);
void dlt_lnkd_lst(struct node**);
void print_altrnat_node(struct node*);
void end_nth_node(struct node* , int);
void middle_node(struct node*);
void sngl_to_crclr(struct node**);
void crclr_to_sngl(struct node**);

