#include <iostream>

using namespacestd;


struct BinaryTreeNode
{
	int data;

	struct BinaryTreeNode * left;
	struct BinaryTreeNode * right;
};


void PreOrder(struct BinaryTreeNode * Root)
{
	if (Root)
	{
		cout<<Root -> data << " ";
	}

	PreOrder(root -> left);
	PreOrder(root -> right);
}


void InOrder(struct BinaryTreeNode * Root)
{
	if (Root)
	{
		InOrder(Root -> left);

		cout<< Root -> data << " ";

		InOrder(Root -> right);


	}
}


void PostOrder(struct BinaryTreeNode * Root)
{
	if (Root)
	{
		PostOrder(Root -> left);
		PostOrder(Root -> right);

		cout<< Root -> data << " ";
	}
}


void LevelOrder(struct BinaryTreeNode * Root)
{
	struct BinaryTreeNode * temp;
	struct Queue * Q = CreateQueue();

	if (!Root)
	{	
		return;
	}

	EnQueue(Q, Root);

	while (!IsEmptyQueue(Q))
	{
		temp = DeQueue(Q);

		cout<< temp -> data -> " ";

		if (temp -> left)
			EnQueue(Q, temp -> left);
		if (temp -> right)
			EnQueue(Q, temp -> right);
	}

	DeleteQueue(Q);
}



bool FindInBinaryTreeUsingRecursion(struct BinaryTreeNode * Root, int data)
{
	int temp;

	if (Root == NULL)
		return 0;

	else
	{
		if (data == Root -> data)
			return true;

		else
		{
			temp = FindInBinaryTreeUsingRecursion(root -> left, data);

			if (temp != false)
			{
				return temp;
			}

			else
			{
				return (FindInBinaryTreeUsingRecursion(root -> right, data));
			}
		}
	}

	return false;
}


int SizeOfBinaryTree(struct BinaryTreeNode * Root)
{
	if (Root == NULL)
		return 0;
	else
		return (SizeOfBinaryTree(root -> left) + 1 + SizeOfBinaryTree(root -> right));
}



void LevelOrderTraversalInReverse(struct BinaryTreeNode * Root)
{
	struct Queue * Q;
	struct Stack * s = CreateStack();

	struct BinaryTreeNode * temp;

	if (!Root)
		return;

	Q = CreateQueue();

	EnQueue(Q, Root);

	while(!IsEmptyQueue(Q))
	{
		temp = DeQueue(Q);

		if (temp -> right)
			Enqueue(Q, temp -> right);
		if (temp -> left)
			Enqueue(Q, temp -> left);
		Push(s, temp);
	}

	while (!IsEmptyStack(s))
		cout<<Pop(s) -> data << " ";
}



void DeleteBinaryTree(TreeNode * Root)
{
	if (Root == NULL)
		return;

	DeleteBinaryTree(Root -> left);

	DeleteBinaryTree(Root -> right);

	delete(Root);
}



int HeightOfBinaryTree(struct BinaryTreeNode * Root)
{
	int left_height, rght_height;

	if (Root == NULL)
		return 0;
	else
	{
		left_height = HeightOfBinaryTree(Root -> left);

		right_height = HeightOfBinaryTree(Root -> right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}



// Problem-13 Give an algorithm for deleting an element (assuming data is given) from binary
// tree.
// Solution: The deletion of a node in binary tree can be implemented as
// • Starting at root, find the node which we want to delete.
// • Find the deepest node in the tree.
// • Replace the deepest node’s data with node to be deleted.
// • Then delete the deepest node.




int AreStructurallySameTrees(struct BinaryTreeNode * Root_1, struct BinaryTreeNode & Root_2)
{
	if (Root_1 == NULL && Root_2 == NULL)
		return 1;

	if (Root_1 == NULL || Root_2 == NULL)
		return 0;

	return (Root_1 -> data == Root_2 -> data  &&  AreStructurallySameTrees(Root_1 -> left, Root_2 -> left)  &&  AreStructurallySameTrees(Root_1 -> right, Root_2 -> right));
}


int Add(struct BinaryTreeNode * Root)
{
	if (Root == NULL)
		return 0;
	else
		return (Root -> data + Add(Root -> left) + Add(Root -> right));
}



struct BinaryTreeNode * MirrorOfBinaryTree(struct BinaryTreeNode * Root)
{
	struct BinaryTreeNode * temp;

	if (Root)
	{
		MirrorOfBinaryTree(root -> left);
		MirrorOfBinaryTree(root -> right);

		temp = root -> left;
		root -> left = root -> right;
		root -> right = temp;
	}

	return Root;
}


bool AreMirrors(struct BinaryTreeNode * Root_1, struct BinaryTreeNode * Root_2)
{
	if (Root_1 == NULL  &&  Root_2 == NULL)
		return true;
	if (Root_1 == NULL || Root_2 == NULL)
		return false;
	if (Root_1 -> data != Root_2 -> data)
		return false;
	else 
		return ( AreMirrors(Root_1 -> left, Root_2 -> right) && AreMirrors(Root_1 -> right, Root_2 -> left));
}



int FindSum(struct TreeNode * Root)
{
	if (!Root)
		return 0;
	return (Root -> data + FindSum(Root -> first_child) + FindSum(Root -> next_sibling));
}



struct BinarySearchTreeNode * Find(struct BinarySearchTreeNode * Root, int data)
{
	if (Root == NULL)
		return NULL;
	if (data < Root -> data)
		return Find(Root -> left, data);
	else if (data > Root -> data)
		return Find(Root -> right, data);
	return Root;
}





int main()
{

	return 0;
}