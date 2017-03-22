#include<iostream>
#include<cstdlib>
using namespace std;
class Stack{
    struct ListNode{
    double value;
    struct ListNode *next;
    };
    ListNode *Head;

public:
	Stack() {Head=NULL;}	// constructor
	~Stack() {
	    while(!IsEmpty())
        {
           Pop();
        }
	}	// destructor
	bool IsEmpty() { return Head == NULL; }
	double Top() {
		if (Head == NULL) {
			cout << "Error: the stack is empty." << endl;
			return -1;
		}
		else
			return Head->value;
	}
	void Push(double x) {
	ListNode *newNode=new ListNode;
	newNode->value=x;
	newNode->next=Head;
	Head=newNode;
	}
	double Pop() {
	    ListNode *tmp;
		if (Head == NULL) {
			cout << "Error: the stack is empty." << endl;
			return -1;
		}
		else {
			double val = Head->value;
            tmp=Head;
			Head=Head->next;
			delete tmp;
			return val;
		}
	}
	void DisplayStack() {
	ListNode *nodePtr;
    cout << "top -->";
	for(nodePtr=Head; nodePtr!=NULL; nodePtr=nodePtr->next)
    {
        cout << "\t|\t" << nodePtr->value << "\t|" << endl;
    }
    cout << "\t|---------------|" << endl;
	}
};

int main(void) {
	Stack stack;
	stack.Push(5.0);
	stack.Push(6.5);
	stack.Push(-3.0);
	stack.Push(-8.0);
	stack.DisplayStack();
	cout << "Top: " << stack.Top() << endl;

	stack.Pop();
	cout << "Top: " << stack.Top() << endl;
	while (!stack.IsEmpty()) stack.Pop();
	stack.DisplayStack();
	return 0;
}
