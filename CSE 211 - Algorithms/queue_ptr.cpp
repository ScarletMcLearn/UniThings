#include <iostream>
#include <cstdlib>

using namespace std;

class Queue
{
	public:
		int val;
		Queue *nextptr;
};

typedef Queue myQueue;
typedef myQueue *QPtr;

int isEmpty(QPtr head)
{
	if(head == NULL) 
	{
		cout << "the queue is empty" << endl;
		return 1;
	}
	else
	{
		cout << "the queue is not empty" << endl;
		return 0;
	}
}

void enQueue(QPtr *head, QPtr *tail, int num)
{
	QPtr aNode = new Queue;
	
	if(aNode != NULL)
	{
		aNode->val = num;
		aNode->nextptr = NULL;
		if(*tail != NULL)
		{
			(*tail)->nextptr = aNode;
			*tail = aNode;	
		}
		else
		{
			*head = aNode; *tail = aNode;
		}
	}
	else
	{
		cout << "there is not enough space" << endl;
	}
}

int deQueue(QPtr *head)
{
	if(*head != NULL)
	{
		QPtr temp = *head;
		(*head) = (*head)->nextptr;
		free(temp);
	}
	else
	{
		cout << "the queue is already empty" << endl;	
	}	
}

void print(QPtr temp)
{
	while(temp != NULL)
	{
		cout << temp->val << ' ';
		temp = temp->nextptr;
	}
	cout << endl;
}

int main()
{
	QPtr head = NULL, tail = NULL;
	int ch, num;
	
	while(1)
	{
		cin >> ch;
		
		if(ch == 0) isEmpty(head);
		else if(ch == 1) 
		{
			cin >> num; enQueue(&head, &tail, num);  	
		}
		else if(ch == 2)
			deQueue(&head);
		else if(ch == 3) print(head);
		else exit(0);	
	}
	
	return 0;
}
