//C Program to Implement a Tree

#include "tree_header.h"

int main()
{
	int choice;
	int data;
	struct node *head = '\0';
	
	while(1)
	{
		printf("\nenter your choice :: add_node = 1 ; binary_tree_size = 2 ; exit = 0\n");
		printf("display = 3 : tree_height = 4 : delete_tree = 5 : leaf_nodes = 6\n");
		printf("diameter = 7 : maximum_node = 8\n");
		
		scanf("%d", &choice);
		
		if(choice == 0)
			break;
			
		switch(choice)
		{
			case 1:
				printf("\nenter the data\n");
				scanf("%d", &data);
				add_node(&head, data);
				break;
			
			case 2:
				data = binary_tree_size(head);
				if(data == 0)
					printf("\nno node\n");
				else
					printf("\nsize of the tree is : %d\n", data);
				break;
				
			case 3:
				display(head);
				break;
				
			case 4:
				data = height(head);
				if(data == 0)
					printf("\nno node\n");
				else
					printf("\nheight of the tree is : %d\n", data);
				break;
				
			case 5:
				dlt_tree(&head);
				break;
				
			case 6:
				if(leaf_nodes(head) == 0)
					printf("\n no node\n");
				break;
				
			case 7:
				data = diameter(head);
				if(data == 0)
					printf("\nno node\n");
				else
					printf("\ndiameter of the tree is : %d\n", data);
				break;
				
			case 8:
				data = max_nodes(head);
				printf("\nmaximum node of tree is : %d\n", data);
				break;
				
			default :
				printf("\n enter the right choice\n");
		}	
	}
}
