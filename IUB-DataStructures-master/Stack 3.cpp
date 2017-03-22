#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StackX
{
private:
	int maxSize;
	vector <char> stackVect;
	int top;

public:
	StackX(int s) : maxSize(s), top(-1)
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



class BracketChecker
{
private:
	string input;

public:
	BracketChecker(string in) : input(in)
	{

	}

	void check()
	{
		int stackSize = input.length();

		StackX theStack(stackSize);

		bool isError = false;

		for (int j = 0; j < input.length(); j++)
		{
			char ch = input[j];
			switch(ch)
			{
				case '{':
				case '[':
				case '(':
				theStack.push(ch);
				break;

				case '}':
				case ']':
				case ')':
				if (! theStack.isEmpty())
				{
					char chx = theStack.pop();
					if ( (ch == '}' && chx != '{') || (ch == ']' && chx != '[') || ( ch == ')' && chx != '('))
					{
						isError = true;

						cout<<"Mismatched Delimiter: " << ch << " at "<< j << endl; 
					}
				}

				else
				{
					isError = true;
					cout<<"Misplaced delimiter "<< ch << " at " << j <<endl;
				}

				break;

				default:
					break;
			}
		}

		if (! theStack.isEmpty())
			cout<<"Missing right delimiter" << endl;
		else if ( !isError )
			cout<<"Ok" << endl;
	}
};


int main()
{
	string input;

	while (true)
	{
		cout<<"Enter string containg delimiters (no whitespace): ";
		cin>> input;

		if (input.length() == 1)
			break;

		BracketChecker theChecker(input);

		theChecker.check();
	}

	return 0;
}