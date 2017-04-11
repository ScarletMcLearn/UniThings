#include <iostream>

using namespacestd;


struct DynArrayQueue
{
	int front, rear;
	int capacity;
	int * array;
};


struct DynArrayQueue * CreateDynQueue()
{
	struct DynArrayQueue * Q = new DynArrayQueue();

	if (!Q)
		return NULL;

	Q -> capacity = 1;
	Q -> front = Q -> rear  = -1;
	Q -> array = new int *;

	if (!Q -> array)
		return NULL;

	return Q;
}


bool IsEmptyQueue(struct DynArrayQueue * Q)
{
	return (Q -> front == -1 );
}


bool IsFullQueue(struct DynArrayQueue * Q)
{
	return ( (Q -> rear + 1) % Q -> capacity == Q -> front);
}


int QueueSize()
{
	return (Q -> capacity - Q -> front + Q -> rear + 1) % Q -> capacity;
}


void EnQueue(struct DynArrayQueue * Q, int data)
{
	if (IsFullQueue(Q))
		ResizeQueue(Q);

	Q -> rear = (Q -> rear + 1) % Q -> capacity;
	Q -> array[Q -> rear] = data;

	if (Q -> front == -1)
		Q -> front = Q -> rear;
}



void ResizeQueue(struct DynArrayQueue * Q)
{
	int size = Q -> capacity;

	Q -> capacity = Q -> capacity * 2;

	Q -> array = new DynArray * Q -> capacity;

	if (!Q -> array)
	{
		cout<<"Memory Error!"<<endl;
	}

	if (Q -> front > Q -> rear)
	{
		for (int i = 0; i < Q -> front; i++)
		{
			Q -> array[i + size] = Q -> array[i];
		}

		Q -> rear = Q -> rear + size;
	}
}



int DeQueue(struct DynArrayQueue * Q)
{
	int data = 0;

	if (IsEmptyQueue(Q))
	{
		cout<<"Empty Queue!";
		return 0;
	}
	else
	{
		data = Q -> array[Q -> front];

		if (Q -> front == Q -> rear)
			Q -> front = Q -> rear = -1;
		else
			Q -> front = (Q -> front + 1) % Q -> capacity;
	}

	return data;
}


void DeleteQueue(struct DynArrayQueue * Q)
{
	if (Q)
	{
		if (Q -> array)
			delete (Q -> array);
		delete (Q -> array);
	}
}




int main()
{

	return 0;
}