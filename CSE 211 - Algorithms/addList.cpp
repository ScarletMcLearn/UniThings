#include <iostream>

using namespace std;  

class Node
{
	public:
		int label;
		int weight;
		Node *nextNode = NULL;	
};

typedef Node *Nptr;
class AddList
{
	public:
		int head;
		Node *aNode = NULL;
		AddList *nextAddList = NULL;
};

typedef AddList List;
typedef List *Lptr;

Nptr *findNode(Nptr *myNode)
{
	if(*myNode == NULL) return myNode;
	else findNode(&((*myNode)->nextNode));
}

Lptr *findHead(Lptr *myList, int val1)
{
	if(*myList == NULL) return myList;
	else if((*myList)->head == val1) return myList;
	else findHead(&((*myList)->nextAddList), val1);
}

void fillList(Lptr *myList, int val1, int val2, int wval)
{
	Lptr *currList = findHead(myList, val1);
	
	if(*currList == NULL)
	{ 
		*currList = new AddList();
		(*currList)->head = val1;
	}
	
	Lptr *currList1 = findHead(myList, val2);
	
	if(*currList1 == NULL)
	{ 
		*currList1 = new AddList();
		(*currList1)->head = val2;
	}
		
	Nptr *currNode = findNode(&((*currList)->aNode));
	
	*currNode = new Node();
	(*currNode)->label = val2;
	(*currNode)->weight = wval;
}

int main()
{
	AddList *myList = NULL;
	int val1, val2, wval;
	
	cin >> val1 >> val2 >> wval;
	
	while(val1 != 0 && val2 != 0)
	{
		fillList(&myList, val1, val2, wval);
		cin >> val1 >> val2 >> wval;
	}
	return 0;
}
