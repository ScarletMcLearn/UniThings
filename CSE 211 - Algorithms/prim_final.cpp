#include <iostream>

#define maxSize 100

using namespace std;

int maxWeight;
int minWeight = 0;
int total = 0;
int count = 0;
int node[maxSize];
int edge[maxSize];

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
		++total; 
	}
	
	Lptr *currList1 = findHead(myList, val2);
	
	if(*currList1 == NULL)
	{ 
		*currList1 = new AddList();
		(*currList1)->head = val2;
		++total; 
	}
		
	Nptr *currNode = findNode(&((*currList)->aNode));
	
	*currNode = new Node();
	(*currNode)->label = val2;
	(*currNode)->weight = wval;
}

void insertNode(int nval)
{
	node[count++] = nval;	
}

int searchNode(Node *aNode)
{
	for(int i = 0; i < count; ++i) 
		if(aNode->label == node[i])	return 0;
		
	return 1;
}

void searchArrayList(Lptr list, int node, int &w, 
					 int &nval, int &nval1)
{
	while(list->head != node) list = list->nextAddList;
	
	Node *currNode = list->aNode;
	
	while(currNode != NULL)
	{
		if(searchNode(currNode))
		{
			if(w >= currNode->weight)
			{
				w = currNode->weight;
				nval = currNode->label;
				nval1 = node;
			}
		}	
		currNode = currNode->nextNode;
	}
}

int searchEdge(Lptr list)
{
	int i, nval = 0, nval1 = node[0];
	int w = maxWeight;
	
	for(i = 0; i < count; ++i)
		searchArrayList(list, node[i], w, nval, nval1);
    
	edge[nval] = nval1;
		
	minWeight += w;
		
	return nval;
}

void prim(Lptr list, int stnode)
{
	int nval = stnode;
	for(int i = 0; i < total-1; ++i)
	{
		insertNode(nval);
		nval = searchEdge(list);	
	}	
}

int main()
{
	AddList *myList = NULL;
	int val1, val2, wval, stnode;
	
	cin >> val1 >> val2 >> wval; maxWeight = wval;
	
	while(val1 != 0 && val2 != 0)
	{
		fillList(&myList, val1, val2, wval);
		cin >> val1 >> val2 >> wval;
		if(wval > maxWeight) maxWeight = wval;
	}
	
	cin >> stnode;
	
	prim(myList, stnode);
	
	cout << minWeight << endl; 
	
	for(int i = 1; i <= count+1; ++i)
	{
		if(edge[i] == 0) continue;
		cout << i << "<-->" << edge[i] << endl; 
	}
	
	return 0;
}
