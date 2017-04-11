#include <iostream>

using namespacestd;


struct ListNode
{
	int data;
	struct ListNode * next;
};


struct Queue
{
	struct ListNode * front;
	struct ListNode * rear;
};


struct Queue * CreateQueue()
{
	struct Queue * Q;
	struct ListNode * temp;

	Q = new Queue;

	if (!Q)
		return NULL;

	temp = new ListNode;

	Q -> front = Q -> rear = NULL;

	return Q;
}


bool IsEmptyQueue(struct Queue * Q)
{
	return (Q -> front == NULL);
}


void EnQueue(struct Queue * Q, int data)
{
	struct ListNode * newNode;

	newNode = new ListNode;

	if (!newNode)
		return NULL;

	newNode -> data = data;
	newNode -> next = NULL;

	if (Q -> rear)
		Q -> rear -> next = newNode;

	Q -> rear = newNode;

	if (Q -> front == NULL)
		Q -> front = Q -> rear;
}


int DeQueue(struct Queue * Q)
{
	int data = 0;
	struct ListNode * temp;

	if (IsEmptyQueue(Q))
	{
		cout<<"Queue is empty!";
		return 0;
	}
	else
	{
		temp = Q -> front;
		data = Q -> front -> data;
		Q -> front = Q -> front -> next;
		delete temp;
	}

	return data;
}


void DeleteQueue(struct Queue * Q)
{
	struct ListNode * temp;

	while (Q)
	{
		temp = Q;

		Q = Q -> next;

		delete temp;
	}

	delete Q;
}



void ReverseQueue(struct Queue * Q)
{
	struct Stack * S = CreateStack();

	while (!IsEmptyQueue(Q))
		Push(S, DeQueue(Q));

	while(!IsEmptyStack(S))
		EnQueue(Q, Pop(S));
}



