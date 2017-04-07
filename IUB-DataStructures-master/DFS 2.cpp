#include <iostream>

using namespace std;

struct Node
{
	int data;

	struct Node * left_child;

	struct Node * right_child;
};


void Generate(struct Node **, int);

void DepthFirstSearch(struct Node *);

void Delete(struct Node **);




int main()
{
	struct Node * Root = NULL;

	int choice = 0;
	int data_input;
	bool flag = false;
	int key;


	do
	{
		cout<<("\nEnter your choice:\n1. Insert\n2. Perform DFS Traversal\n3. Exit\nChoice: ");

		cin>> choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter element to insert: ";
				cin>> data_input;

				Generate(&Root, data_input);

				break;

			case 2:
				DepthFirstSearch(Root);

				break;

			case 3:
				delete (&Root);

				cout<<"Memory Cleared\nPROGRAM TERMINATED\n";

				break;

			default:
				cout<<"Not a valid input, try again\n";

		}
	} while (choice != 3);


	return 0;
}



void Generate(struct Node ** Root, int input_data)
{
	struct Node * temporary_node = * Root;
	struct Node * previous_node = * Root;


	if (* Root == NULL)
	{
		* Root = new Node();

		* Root ->  data = input_data;


		* Root -> left_child = NULL;

		* Root -> right_child = NULL;
	}

	else
	{
		while (temporary_node != NULL)
		{
			if (input_data > temporary_node -> data)
			{
				previous_node = temporary_node;

				temporary_node = temporary_node -> right_child;
			}

			else
			{
				previous_node = temporary_node;

				temporary_node = temporary_node -> left_child;

			}

		}

		temporary_node = new Node();

		temporary_node -> data = input_data;

		if (input_data >= previous_node -> data)
		{
			previous_node -> right_child = temporary_node;

		}

		else
		{
			previous_node -> left_child = temporary_node;
		}
	}
}



void DepthFirstSearch(struct Node * root)
{
	if (root)
	{
		if (root -> left_child)
		{
			DepthFirstSearch(root -> left_child);
		}

		if (root -> right_child)
		{
			DepthFirstSearch(root -> right_child);
		}

		cout<<root -> data >> " ";
	}
}



void Delete(struct Node ** root)
{
	if (*root != NULL)
	{
		if ((* root) -> left_child)
		{
			delete (&(* root) -> left_child);
		}

		if ((* root) -> right_child)
		{
			delete (&(* root) -> right_child);
		}

		free(* head);

	}
}
