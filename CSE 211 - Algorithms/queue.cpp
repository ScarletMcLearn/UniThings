#include <iostream>

#define maxsize 4

using namespace std;

int Q[maxsize] = {0};
int head = 0;
int tail = 1;

int isFull()
{
	if(head == tail) return 1;
	else return 0;
}

int isEmpty()
{
	if(tail == (head+1) || head == (tail + maxsize - 1))
		return 1;
	else return 0; 
}

void enqueue(int val)
{
	if(!isFull())
	{
		if(tail != (maxsize-1))
		{
			Q[tail++] = val;
 		}
		else 
		{
			Q[tail] = val; tail = 0;
		}
	}
	
}

int dequeue()
{
	int str;
	
	if(!isEmpty())
	{
		str = Q[head];
		if(head != (maxsize-1))
			Q[head++] = 0;
		else 
		{
			Q[head] = 0; head = 0; 
		}
	}	
}

int main()
{
	int val, ch = 0;
	
	while(ch != 1)
	{
		cin >> ch;
		
		if(ch == 2) 
		{
			cin >> val;
			enqueue(val);
		}
		else if(ch == 3) dequeue();
		else if(ch == 4) cout << isEmpty() << endl;
		else if(ch == 5) cout << isFull() << endl;	
	}
	
	return 0;
}
