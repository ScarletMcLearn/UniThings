#include <iostream>

using namespacestd;


struct DynArrayStack
{
	int top;
	int capacity;
	int * array;
};

struct DynArrayStack * CreateStack()
{
	struct DynArrayStack * S = new DynArrayStack();

	if (!S)
		return NULL;

	S -> capacity = 1;
	S -> top = -1;

	S -> array = new * int;

	if (!S -> array)
		return NULL;

	return S;
}



bool IsFullStack(struct DynArrayStack * S)
{
	return (S -> top == S -> capacity - 1);
}


void DoubleStack(struct DynArrayStack * S)
{
	S -> capacity = capacity * 2;
	S -> array = new int * (capacity);
}


void Push(struct DynArrayStack * S, int x)
{
	if (IsFullStack(S))
		DoubleStack(S);

	S -> top = S -> top + 1;
	S -> array[S -> top] = x;
}


bool IsEmptyStack(struct DynArrayStack * S)
{
	return S -> top == -1;
}


int Top(struct DynArrayStack * S)
{
	if (IsEmptyStack(S))
		return INT_MIN;

	return S -> array[S -> top];
}



int Pop(struct DynArrayStack * S)
{
	if (IsEmptyStack(S))
		return INT_MIN;

	S -> top = S -> top - 1;

	return S -> array[S -> top];
}



void DeleteStack(struct DynArrayStack * S)
{
	if (S)
	{
		if (S -> array)
			delete(S -> array);

		delete(S);
	}
}



int main()
{

	return 0;
}