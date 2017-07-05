#include <iostream>
#include <cstdlib>

using namespace std;

class MyStack{
	public:
       int val;
       MyStack *nextPtr;
}; 

typedef MyStack Stack;
typedef Stack *StackPtr;

void PUSH(StackPtr *myStackPtr, int n)
{
     StackPtr newStackPtr = NULL;
     
	 cout << "the value to be PUSH: " << n << endl;
     
     newStackPtr = new Stack;

     if(newStackPtr != NULL)
     {
            newStackPtr->val = n;
            newStackPtr->nextPtr = *myStackPtr;
            *myStackPtr = newStackPtr;
     }
     else cout << "there is not enough memory" << endl;
}

void POP(StackPtr *myStackPtr)
{
     StackPtr tempPtr;

     tempPtr = *myStackPtr;

     if(*myStackPtr != NULL)
     {
            cout << "the value to be POP: "
			<< (*myStackPtr)->val << endl;
			
            (*myStackPtr) = (*myStackPtr)->nextPtr;
            free(tempPtr);
     } 
     else cout << "the stack is already empty" << endl;         
}

void PEEK(StackPtr myStackPtr)
{
     if(myStackPtr != NULL) 
           cout << "the current value is: "
		   << myStackPtr->val << endl;
     else cout << "the stack is empty" << endl;
}

void isEmpty(StackPtr myStackPtr)
{
     if(myStackPtr == NULL) cout << "the stack is empty" << endl;
     else cout << "the stack isn't empty" << endl;
}

void printStack(StackPtr myStackPtr)
{
     while(myStackPtr != NULL)
     {
           cout << myStackPtr->val << "-->";
           myStackPtr = myStackPtr->nextPtr; 
     }
     cout << "NULL" << endl;
}

int main()
{
    StackPtr myStackPtr = NULL;
    int n, ch;
  
    cin >> ch;

    while(1)
    {
         if(ch == 0){ cin >> n; PUSH(&myStackPtr, n); }
         else if(ch == 1) POP(&myStackPtr);
         else if(ch == 2) PEEK(myStackPtr);
         else if(ch == 3) isEmpty(myStackPtr);
         else if(ch == 4) printStack(myStackPtr);
         else exit(0);
        
         cin >> ch;
    }

    return 0;
} 
