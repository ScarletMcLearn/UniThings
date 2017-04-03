#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

struct TreeNode
{
	int data;

	struct TreeNode * left;
	struct TreeNode * right;
}


class Tree
{
	int tNode, totalNode;

public:
	TreeNode * root;

	Tree()
	{

	}



	void deleteTree(TreeNode * root)
	{
		if (root != NULL)
		{
			deleteTree(root -> left);
			deleteTree(root -> right);
			delete root;

			return;
		}
	}


}