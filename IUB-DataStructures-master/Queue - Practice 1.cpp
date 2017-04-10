#include <iostream>

using namespacestd;


struct ArrayQueue
{
	int front, rear;
	int capacity;
	int * array;
}


struct ArrayQueue * Queue(int size)
{
	struct ArrayQueue * Q = new ArrayQueue();

	if (!Q)
		return NULL;

	Q -> capacity = size;
	Q -> front = Q -> rear = -1;
	Q -> array = new * int;

	if (!Q -> array)
		return NULL;

	return Q;

}


bool IsEmptyQueue(struct ArrayQueue * Q)
{
	return Q -> front == -1;
}

bool IsFullQUeue(struct ArrayQueue * Q)
{
	return Q -> rear + 1 % Q -> capacity == Q -> front;
}


int QueueSize()
{
	return (Q -> capacity - Q -> front + Q -> rear + 1) % Q -> capacity;
}



void EnQueue(struct ArrayQueue * Q, int data)
{
	if (IsFullQUeue(Q))
		cout<<"Queue Overflow!";

	else
	{
		Q -> rear = (Q -> rear + 1) % Q -> capacity;
		Q -> array[Q -> rear] = data;

		if (Q -> front == -1)
			Q -> front = Q -> rear;
	}
}



int DeQueue(struct ArrayQueue * Q)
{
	int data = 0;

	if (IsEmptyQueue(Q))
	{
		cout<<"Queue is Empty!";
		return 0;
	}
	else
	{
		data = Q -> array[Q -> front];

		if (Q -> front == Q -> rear)
			Q -> front = Q -> rear = -1;
		else
			Q -> front = ( Q -> front + 1 ) % Q -> capacity;
	}

	return data;

}



void DeleteQueue(struct ArrayQueue * Q)
{
	if (Q)
	{
		if (Q -> array)
			delete (Q -> array);

		delete (Q);
	}
}



int main()
{

	return 0;
}