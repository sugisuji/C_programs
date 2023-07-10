
#include "linked_list.h"

int main()
{
	int choice;
	int data;
	int node_postn;
	struct node *head = '\0'; 
//	struct node *last = '\0';
	
	while(1)
	{
		printf("\nEnter your choice :: exit = 0 : add_node_after_given_node = 1 \nadd_node_front = 2 : add_node_end = 3 \n");
		printf(" display = 4 : linked_list_length = 5 \n delete_node = 6 : reverse_node = 7 ::\n");
		printf(" reverse_node_print_by_recursion = 8 : delete_linked_list = 9 : print_alternate_node = 10\n");
		printf(" find_nth_node_from_end = 11 : find_middle_node = 12 : single_to_circular_linkedlist = 13\n");
		printf(" circular_to_single_linkedlist = 14\n");
		
		scanf("%d", &choice);
		
		if(choice == 0)
			break;
		
		switch(choice)
		{
			case 1:
				printf("\nenter the node position\n");
				scanf("%d", &node_postn);
				printf("\nenter the data to add\n");
				scanf("%d", &data);
				addnode_gvn_pstn(&head, data, node_postn);
				break;
			
			case 2:
				printf("\nenter the data to add\n");
				scanf("%d", &data);				
				addnode_front(&head, data);
				break;
				
			case 3:
				printf("\nenter the data to add\n");
				scanf("%d", &data);
				addnode_end(&head, data);
				break;
				
			case 4:
				display(head);
				break;
				
			case 5:
				printf("\nnumber of nodes in linked list is = %d\n", lnkdlst_length(head));
				break;
				
			case 6:
				printf("\nenter the node to delete\n");
				scanf("%d", &node_postn);
				delete_node(&head, node_postn);
				break;
				
			case 7:
				reverse_node(&head);
				break;
				
			case 8:
				rvrs_node_print(head);
				break;
				
			case 9:
				dlt_lnkd_lst(&head);
				break;
				
			case 10:
				print_altrnat_node(head);
				break;
				
			case 11:
				printf("\nenter the node_number to find from linked list end\n");
				scanf("%d", &node_postn);
				end_nth_node(head, node_postn);
				break;
				
			case 12:
				middle_node(head);
				break;
				
			case 13:
				sngl_to_crclr(&head);
				break;
				
			case 14:
				crclr_to_sngl(&head);
				break;
			
			default :
				printf("\nenter the right choice\n");				
		}
	}
	return;	
}
