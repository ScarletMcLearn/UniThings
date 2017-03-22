#include<iostream>
#include<cstdlib>
using namespace std;

class Queue {
public:
	Queue();			// constructor
	~Queue(); 	// destructor
	bool IsEmpty(void);
	bool Enqueue(double x);
	bool Dequeue(double & x);
	void DisplayQueue(void);
private:
struct Node{
    double value;
    struct Node* next;
    };

	Node* front;	// front node
	Node* rear;		// rear node
	int counter;	// number of elements

};

Queue::Queue()
{
    front=rear=NULL;
    counter=0;
}
Queue::~Queue()
{
    double val;
    while(!IsEmpty()) Dequeue(val);
}
bool Queue::IsEmpty(void){
if(counter!=0) return false;
return true;
}

bool Queue::Enqueue(double x){
Node * newNode=new Node;
newNode->next=NULL;
newNode->value=x;
if(IsEmpty())
{
    front=newNode;
    rear=newNode;
}else{
rear->next=newNode;
rear=rear->next;
}
counter++;
return true;
}

bool Queue::Dequeue(double & x){
if(IsEmpty()) {
    cout<<"Queue Empty"<<endl;
    return false;
}
x=front->value;
Node *delNode=front;
front=front->next;
delete delNode;
counter--;
return true;
}
void Queue::DisplayQueue(void){
    Node *nodePtr=front;
    cout << "front -->";
	for (int i = 0; i < counter; i++) {
		if (i == 0) cout << "\t";
		else		cout << "\t\t";
		cout << nodePtr->value;
		nodePtr=nodePtr->next;
		if (i != counter - 1)
			cout << endl;
		else
			cout << "\t<-- rear" << endl;
	}
}


int main(void) {
	Queue queue;
	cout << "Enqueue 5 items." << endl;
	for (int x = 0; x < 5; x++)
		queue.Enqueue(x);
	cout << "Now attempting to enqueue again..." << endl;
	queue.Enqueue(5);
	queue.DisplayQueue();
	double value;
	queue.Dequeue(value);
	cout << "Retrieved element = " << value << endl;
	queue.DisplayQueue();
	//cout<<endl;
	queue.Enqueue(7);
	queue.DisplayQueue();
	return 0;
}
