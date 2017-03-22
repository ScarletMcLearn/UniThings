#include <iostream>
#include <vector>

using namespace std;

class Queue
{
private:
	int maxSize;
	vector <int> (queVect);
	int front;
	int rear;

public:
	Queue(int s) : maxSize(s+1), front(0), rear(-1)
	{
		queVect.resize(maxSize);
	}

	void insert(int j)
	{
		if (rear == maxSize - 1)
			rear = -1;

		queVect[++rear] = j;
	}

//	int remove()
//	{
//		int temp = queVect[front++];
//
//		if (front == maxSize)
//			front = 0;
//
//		return temp;
//	}

	int remove()
	{
		int temp = queVect[front++];

		if (front == maxSize)
			front = 0;
		return temp;
	}

	int peek()
	{
		return queVect[front];
	}

	bool isEmpty()
	{
		return ( (rear + 1 == front) || (front + maxSize - 1 == rear) );
	}

	bool isFull()
	{
		return (rear + 2 == front || (front + maxSize -2 == rear));
	}

	int size()
	{
		if (rear >= front)
			return rear - front + 1;
		else
			return (maxSize - front) + (rear + 1);
	}

};



int main()
{
	Queue theQueue(5);

	theQueue.insert(10);
	theQueue.insert(20);
	theQueue.insert(30);
	theQueue.insert(40);

	theQueue.remove();
	theQueue.remove();
	theQueue.remove();


	theQueue.insert(50);
	theQueue.insert(60);
	theQueue.insert(70);
	theQueue.insert(80);


	while ( ! theQueue.isEmpty() )
	{
		int n = theQueue.remove();

		cout<< n << " ";

	}

	cout<<endl;

	return 0;

}
