#include <iostream>
#include <vector>
#include <string>

using namespace std;


class StackX
{
private:
	int maxSize;
	vector <char> stackVect;
	int top;

public:
	StackX(int max) : maxSize(max), top(-1)
	{
		stackVect.resize(maxSize);
	}

	void push(char j)
	{
		stackVect[++top] = j;
	}

	char pop()
	{
		return stackVect[top--];
	}

	char peek()
	{
		return stackVect[top];
	}

	bool isEmpty()
	{
		return (top == -1);
	}

};


class Reverser
{
private:
	string input;
	string output;

public:
	Reverser(string in) : input(in)
	{

	}

	string doRev()
	{
		int stackSize = input.length();
		StackX theStack(stackSize);

		for (int j = 0; j < input.length(); j++)
		{
			char ch = input[j];
			theStack.push(ch);
		}

		output = "";

		while (! (theStack.isEmpty()))
		{
			char ch = theStack.pop();
			output = output + ch;

		}

		return output;
	}
};




int main()
{
	string input, output;

	while (true)
	{
		cout<<"Enter a word: ";
		cin>>input;

		if (input.length() < 2)
			break;

		Reverser theReverser(input);

		output = theReverser.doRev();

		cout<<"Reversed: " << output << endl;
	}

	return 0;
}
