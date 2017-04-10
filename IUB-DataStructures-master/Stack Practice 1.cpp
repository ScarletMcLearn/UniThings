#include <iostream>

using namespacestd;



struct ArrayStack
{
	int top;
	int capacity;
	int * array;
};


struct ArrayStack * CreateStack()
{
	struct ArrayStack * S = new ArrayStack();

	if (!S)
		return NULL;

	S -> capacity = 10;

	S -> top = -1;

	S -> array = new * int(10);

	if (!S -> array)
		return NULL;

	return S;
}


bool IsEmptyStack(struct ArrayStack * S)
{
	return (S-> top == -1);
}


bool IsFullStack(struct ArrayStack * S)
{
	return (S -> top == S -> capacity - 1);
}


void Push(struct ArrayStack * S, int data)
{
	if (IsFullStack(S))
		cout<<"Stack Overflow!\n";
	else
	{
		S -> top = S -> top + 1;

		S -> array[S -> top] = data;
	}
}


int Pop(struct ArrayStack * S)
{
	if (IsEmptyStack(S))
	{
		cout<<"Stack Is Empty! \n";
		return 6548923;
	}
	else
	{
		int return_value = (S -> array[S -> top]);

		top = top -1;

		return return_value;
	}
}



void DeleteStack(struct DynArrayStack * S)
{
	if (S)
	{
		if (S -> array)
			delete(S -> array);

		free(S);
	}
}




int main()
{

	return 0;
}