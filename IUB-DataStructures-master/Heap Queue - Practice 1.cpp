#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

class Queue {

    struct Node{
      float priority_state;
      int key;
   };
   //int * Heap;
    Node *Heap;
	int counter;	// number of elements
	int maxSize;	// size of array queue
	double* values;	// element array

public:
	Queue(int size = 10);			// constructor
	~Queue() { delete [] Heap; }	// destructor
	bool IsEmpty(void);
	bool IsFull(void);
	bool Enqueue(double x,float priority_state);
	bool Dequeue(double & x,float priority_state);
	void DisplayQueue(void);
	void rebuildHeap(Node  Heap[], int  parent,  int  n);

};



Queue::Queue(int size /* = 10 */) 
{
	Heap		=	new Node[size];
	maxSize		=	size;
	counter		=	0;
}

bool Queue::IsEmpty() 
{
	if (counter)	return false;
	else			return true;
}

bool Queue::IsFull() 
{
	if (counter < maxSize)	return false;
	else				return true;
}

bool Queue::Enqueue(double x, float priority_state) 
{
	int i;
	if (IsFull()) {
		cout << "Error: the queue is full." << endl;
		return false;
	}
	else {
		i = counter;
        
        while ((i!=0) && (priority_state>Heap[(i-1)/2].priority_state)) 
        {
	        Heap[i] = Heap[(i-1)/2];
	        i = (i-1)/2;
        }
        Heap[i].key= x;
        Heap[i].priority_state= priority_state;
		// update counter
		counter++;
		return true;
	}
}
void Queue::rebuildHeap(Node  Heap[], int  parent,  int  n)
       {
           int  child  =  2 * parent + 1;	// set child to root’s left child, if any
           if( child  <  n )		// if root’s left child exists . . .
           {
               int  rightChild  =  child + 1;
               if( rightChild  <  n  &&  Heap[rightChild].priority_state>Heap[child].priority_state)
               child = rightChild;	// child indicates the larger item
               if(Heap[parent].priority_state<Heap[child].priority_state)
               {
                   swap( Heap[parent],  Heap[child]);
                   rebuildHeap( Heap,child,n);
               }
          }
       }
bool Queue::Dequeue(double & x, float priority_state) {
	if (IsEmpty()) {
		cout << "Error: the queue is empty." << endl;
		return false;
	}
	else {
		// retrieve the front item
		x=Heap[0].key;
		priority_state=Heap[0].priority_state;
		Heap[0]=Heap[counter-1];
		// update counter
		counter--;
		rebuildHeap(Heap,0,counter);
		return true;
	}
}
void Queue::DisplayQueue() {
	Node *tmp;
	int tCounter=counter;
	tmp=new Node[counter];
	for(int i=0;i<counter;i++)
        tmp[i]=Heap[i];

    cout<<"\nQueue elements: "<<endl;
    for( ;tCounter>0; )
    {
        cout<<tmp[0].key<<"("<<tmp[0].priority_state<<")"<<" ";
        tmp[0]=tmp[tCounter-1];
        tCounter=tCounter-1;
        rebuildHeap(tmp,0,tCounter);
    }
}
int main(void) {
	Queue queue(5);

	queue.Enqueue(100,50);
	queue.Enqueue(12,2);
	queue.Enqueue(15,3);
	queue.Enqueue(200,50);
	queue.Enqueue(1,100);

	queue.DisplayQueue();
	return 0;
}


