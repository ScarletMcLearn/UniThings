#include <iostream>
#include <vector>

using namespace std;

class StackX
{
private:
	int maxSize;
	vector <double> stackVect;
	int top;

public:
	StackX(int s) : maxSize(s), top(-1)
	{
		stackVect.reserve(maxSize);
	}

	void push(double j)
	{
		if (top + 1 < maxSize)
		{
		stackVect[++top] = j;
		cout<<"Successfully PUSHED " << j << " to the top of the stack." <<endl;
		}

		else
			cout<<"Space filled! No more space in stack. :(" <<endl <<endl;

	}

	double pop()
	{
		return stackVect[top--];
	}

	double peek()
	{
		return stackVect[top];
	}

	bool isEmpty()
	{
		return (top == - 1);
	}

	bool isFull()
	{
		return (top == maxSize - 1);
	}

};


int main()
{
	StackX theStack(2);

	theStack.push(10);
	theStack.push(20);
	theStack.push(30);
	theStack.push(40);

	while (! (theStack.isEmpty()) )
	{
		double value = theStack.pop();
		cout<<value <<" ";

	}

	cout<<endl;

	return 0;
}
