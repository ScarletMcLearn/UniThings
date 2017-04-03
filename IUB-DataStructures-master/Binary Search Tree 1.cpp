#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
	int iData;
	double dData;
	Node * pLeftChild;
	Node * pRightChild;


	Node() : iData(0), dData(0.0), pLeftChild(NULL), pRightChild(NULL)
	{

	}

	void displayNode()
	{
		cout<<"{" << iData << ", " << dData << "} ";

	}
}


class Nodei
{
Person* p1; //pointer to Person object
Node* pLeftChild; //pointer to left child
Node* pRightChild; //pointer to right child
};


class Tree
{
private:
	Node * pRoot;

public:
	Tree() : pRoot(NULL)
	{	}

	Node * find(int key)
	{
		Node * pCurrent = pRoot;

		while (pCurrent -> iData != key)
		{
			if (key < pCurrent -> iData)	
				pCurrent = pCurrent -> pLeftChild;	
			else
				pCurrent = pCurrent -> pRightChild;

			if (pCurrent == NULL)
				return NULL;


		}

		return pCurrent;
	}



	void insert(int id, double dd) //insert new node
	{
		Node* pNewNode = new Node; //make new node
		pNewNode->iData = id; //insert data
		pNewNode->dData = dd;
		
		if(pRoot==NULL) //no node in root
		pRoot = pNewNode;
		
		else //root occupied
		{
		Node* pCurrent = pRoot; //start at root
		Node* pParent;

		while(true) //(exits internally)
		{
		pParent = pCurrent;

		if(id < pCurrent->iData) //go left?
		{
			pCurrent = pCurrent->pLeftChild;

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
	} //end insert()




	void inOrder(Node* pLocalRoot)
	{
		if(pLocalRoot != NULL)
		{
			inOrder(pLocalRoot->pLeftChild); //left child
			cout << pLocalRoot->iData << “ “; //display node
			inOrder(pLocalRoot->pRightChild); //right child
		}
	}



	Node* minimum() // returns node with minimum key value
	{
		Node* pCurrent, pLast;
		pCurrent = pRoot; //start at root
		
		while(pCurrent != NULL) //until the bottom,
		{
			pLast = pCurrent; //remember node
			pCurrent = pCurrent->pLeftChild; //go to left child
		}

		return pLast;
	}



	Node* maximum() // returns node with maximum key value
	{
		Node* pCurrent, pLast;
		pCurrent = pRoot; //start at root
		
		while(pCurrent != NULL) //until the bottom,
		{
			pLast = pCurrent; //remember node
			pCurrent = pCurrent->pRightChild; // go to right child
		}
		
		return pLast;
	}



	void displayTree()
	{

	}

};


int main()
{
	Tree theTree;

	theTree.insert(50, 1.5);
	theTree.insert(25, 1.7);
	theTree.insert(75, 1.9);

	Node * found = theTree.find(25);

	if (found != NULL)
		cout<<"Found the node with key 25" <<endl;
	else
		cout<<"Could not find node with key 25" <<endl;

	return 0;
}