#include<iostream>
#include<cstdlib>
using namespace std;

class Stack {
public:
	Stack(int size = 10);			// constructor
	~Stack() { delete [] values; }	// destructor
	bool IsEmpty() { return top == -1; }
	bool IsFull() { return top == maxTop; }
	double Top();
	void Push(double x);
	double Pop();
	void DisplayStack();
private:
	int maxTop;		// max stack size = size - 1
	int top;		// current top of stack
	double* values;	// element array
};

Stack::Stack(int size)
{
    values= new double[size];
    maxTop=size-1;
    top=-1;
}
double Stack::Top(){
if(IsEmpty())
{
    cout<<"Stack is Empty!!"<<endl;
    return -1;
}
return values[top];
}
void Stack::Push(double x){
if(IsFull())
{
    cout<<"Stack is Full!!"<<endl;
    return;
}
values[++top]=x;
}

double Stack::Pop(){
if(IsEmpty())
{
    cout<<"Stack is Empty!!"<<endl;
    return -1;
}
return values[top--];
}

void Stack::DisplayStack()
{
    cout << "top -->";
	for (int i = top; i >= 0; i--)
		cout << "\t|\t" << values[i] << "\t|" << endl;
	cout << "\t|---------------|" << endl;

}

int main(void) {
	Stack stack(5);
	stack.Push(5.0);
	stack.Push(6.5);
	stack.Push(-3.0);
	stack.Push(-8.0);
	stack.DisplayStack();
	cout << "Top: " << stack.Top() << endl;

	stack.Pop();
	cout << "Top: " << stack.Top() << endl;
	while (stack.IsEmpty()==false)
    {
        stack.Pop();
    }
	stack.DisplayStack();
	return 0;
}





