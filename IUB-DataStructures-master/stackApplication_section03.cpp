#include<iostream>
#include"stack_section03.cpp"
#include<string>
using namespace std;


int main()
{
Stack stk(50);
int i,n;
double ts;
string s;
cout<<"Enter a Sequence"<<endl;
cin>>s;
n=s.length();


for(i=0;i<n;i++)
{
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
     stk.Push(s[i]);
    else{
        if(!stk.IsEmpty())
        ts=stk.Pop();
        else break;

        if(!(ts=='('&&s[i]==')'||ts=='{'&&s[i]=='}'||ts=='['&&s[i]==']')) break;
    }
}

if(stk.IsEmpty()&&i==n)
{
    cout<<"Valid Sequence"<<endl;
}
    else cout<<"InValid Sequence"<<endl;

}



