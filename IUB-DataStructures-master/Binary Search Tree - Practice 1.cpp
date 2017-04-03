#include <iostream>

#include <vector>

using namespace std;


class Node
{
public:
	int id;
	int data;

	Node * left_child;
	Node * right_child;


	Node() : id(0), data(0.0), left_child(NULL), right_child(NULL)
	{

	}


	void display_node()
	{
		cout<<"id: " << id << ", " << data << endl;
	}


};


class Tree
{
private:
	Node * root;

public:
	Tree(): root(NULL)
	{

	}


	Node * find(search_id)
	{
		Node * current = root;

		while (search_id != current -> id)
		{
			if (current -> id < search_id)
			{
				current = current -> right_child;
			}
			else
			{
				current = current -> left_child;
			}

			if (current == NULL)
			{
				return (NULL);
			}
		}

		return (current);
	}


	// Node * recursive_insert(Node * root, Node * new_node)
	// {
	// 	if (root == NULL)
	// 	{
	// 		return new_node;
	// 	}
	// 	else if (new_node -> id < root -> id)
	// 	{
	// 		root = root -> left_child;
	// 	}

	// }



	void insert(int ii_id, int if_data) //insert new node
	{
		Node * new_node = new Node; //make new node
		new_node -> id = ii_id; //insert data
		new_node-> data = if_data;
		
		if(root == NULL) //no node in root
		{
			pRoot = pNewNode;
		}
		
		else //root occupied
		{
		Node* current = root; //start at root
		Node* parent;

		while(true) //(exits internally)
		{
		parent = current;

		if(current -> id > ii_id) //go left?
		{
			current = pCurrent->pLeftChild;
//eddur porjonto hoise
			if(pCurrent == NULL) //if end of the line,
			{ //insert on left

				pParent->pLeftChild = pNewNode;
				return;
			}
		} //end if go left

		else //or go right?
		{
			pCurrent = pCurrent->pRightChild;
				if(pCurrent == NULL) //if end of the line
				{ //insert on right
					pParent->pRightChild = pNewNode;
					return;
				}
		} //end else go right
		} //end while
		} //end else not root
	} //end ins


	 TreeNode* recInsert(TreeNode *root, TreeNode *newNode)
    {
        TreeNode * corner_node;

        if(root==NULL)
        {
            return newNode;
        }
        else if(newNode->data<root->data)
        {
            corner_node =recInsert(root->left,newNode);

            root -> left_child = corner_node;
        }
        else
        {
            corner_node =recInsert(root->right_child,newNode);

            root -> right_child = corner_node;
        }

        return root;
    }



    TreeNode * find_min(TreeNode * current)
    {
    	if (current -> left_child == NULL)
    	{
    		return (current);
    	}
    	else
    	{
    		find_min(current -> left_child);
    	}
    }


    void min_setter(int Arr[2]; TreeNode * min)
    {
    	Arr[0] = min -> id;
    	Arr[1] = min -> data;
    }


    TreeMpde * find_max(TreeNode * current);
    {
    	if (current -> right_child == NULL)
    	{
    		return (current);
    	}
    	else
    	{
    		find_max(current -> right_child)
    	}
    }


    void max_setter(int Arr[2]; TreeNode * max)
    {
    	Arr[0] = max -> id;
    	Arr[1] = max -> data;
    } 


    TreeNode * find_min(TreeNode * current)
    {
    	if (current -> left_child == NULL)
    	{
    		return (current);
    	}
    	else
    	{
    		find_min(current -> left_child);
    	}
    }


    void min_setter(int Arr[2]; TreeNode * min)
    {
    	Arr[0] = min -> id;
    	Arr[1] = min -> data;
    }


    bool search(TreeNode * current, int search_value)
    {
    	if (current == NULL)
    	{
    		return (false);
    	}
    	else if (current -> id < search_value)
    	{
    		search(current -> right_child, search_value);
    	}
    	else if (current -> id > search_value)
    	{
    		search(current -> left_child, search_value);
    	}
    	else
    	{
    		return (true);
    	}
    }


    void in_order(TreeNode * current)
    {
    	if (current == NULL)
    	{
    		return;
    	}

    	in_order(current -> left_child);

    	cout<<current -> id << " ";

    	in_order(current -> right_child);
    }


    void pre_order(TreeNode * current)
    {
    	if (current == NULL)
    	{
    		return;
    	}

    	cout<<current -> id << " ";

    	pre_order(current -> left_child);

    	pre_order(current -> right_child);
    }


    void post_order(TreeNode * current)
    {
    	if (current == NULL)
    	{
    		return;
    	}

    	post_order(current -> left_child);
    	post_order(current -> right_child);

    	cout<<current -> id << " ";
    }


    TreeNode * recursive_insert(TreeNode * current; TreeNode * new_node)
    {
    	if (current == NULL)
    	{
    		return new_node;
    	}

    	TreeNode * corner_node;

    	else if (current -> id < new_node -> id)
    	{
    		corner_node = recursive_insert(current -> left_child; new_node);

    		current -> left_child = corner_node;
    	}

    	else
    	{
    		corner_node = recursive_insert(current -> right_child; new_node);

    		current -> right_child = corner_node;
    	}

    	return (current);

    }



    void insert(int data_1, int data_2)
    {
    	TreeNode * new_node = new TreeNode;

    	new_node -> id = data_1;
    	new_node -> data = data_2;

    	new_node -> left_child = NULL;
    	new_node -> right_child = NULL;

    	r = recursive_insert(r, new_node);

    	return;
    }





    bool recDelete(TreeNode *root, float sVal, TreeNode *parent=NULL, int child=0)
    {
        TreeNode *delNode, *largest;

        if(root==NULL) return false;
        if(sVal<root->data)
        {
            return recDelete(root->left,sVal,root,0);
        }
        else if(sVal>root->data)
        {
            return recDelete(root->right,sVal,root,1);
        }
        else{
            if(root->left==NULL)
            { //node have only right child
                if(parent==NULL) r=root->right;
                else if(child==0)
                {
                    parent->left=root->right;
                    delete root;
                    return true;
                }
                else{
                    parent->right=root->right;
                    delete root;
                    return true;
                }
            }
            else if(root->right==NULL)
            {
                //node have only left child
                if(parent==NULL) r=root->left;
                else if(child==0)
                {
                    parent->left=root->left;
                    delete root;
                    return true;
                }
                else{
                    parent->right=root->left;
                    delete root;
                    return true;
                }
            }
            else{
               //node have both children
               delNode=root;
               largest=findMaximum(root->left);
               delNode->data=largest->data;
               return recDelete(delNode->left,largest->data,delNode,0);

            }

        }

    }
    void bstDelete()
    {
        float sVal;
        cout<<"\nEnter Data to Delete: ";
        cin>>sVal;
        if(recDelete(r,sVal)==true)
        {
            cout<<"Successfully Deleted!!"<<endl;
        }
        else{
            cout<<"Not Deleted or Data not found!!"<<endl;
        }
    }






}








int main()
{
	return 0;
}