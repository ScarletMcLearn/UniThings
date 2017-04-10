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




int main()
{

	return 0;
}