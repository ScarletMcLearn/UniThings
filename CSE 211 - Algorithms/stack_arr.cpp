#include <iostream>
#include <cstdlib>

#define MaxSize 5

using namespace std;

int myarr[MaxSize+1] = {0};
int currSize = 0;

void PUSH(int n)
{
     if(currSize < MaxSize) myarr[currSize++] = n;
     else return ;
}

void POP()
{
     if(currSize > 0) myarr[currSize--] = 0;
     else return ;
}


// ///////////////////////////////////
int PEEK()
{
     if(currSize > 0 || currSize <= MaxSize) return myarr[currSize-1];
     else return 0;
}
// ///////////////////////////////////

int EMPTY()
{
    if(currSize == 0) return 1;
    else return 0;
}
int FULL()
{
    if(currSize == MaxSize) return 1;
    else return 0;
}

int main()
{
    int n, ch;

    cin >> ch;

    while(1)
    {
         if(ch == 0)
         {
              cin >> n; PUSH(n);
         }
         else if(ch == 1) POP();
         else if(ch == 2) cout << PEEK() << endl;
         else if(ch == 3) cout << EMPTY() << endl;
         else if(ch == 4) cout << FULL() << endl;
         else exit(1);

         cin >> ch;
    }
    return 0;
}
