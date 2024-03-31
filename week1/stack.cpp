#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');
    s.push('E');
    cout<<"Deleted element "<<s.top()<<endl;
    s.pop();
    cout<<"Top most element "<<s.top()<<endl;
    cout<<"The size of the stack is "<<s.size()<<endl;
    //displaying the elements
    cout<<"The elements are: "<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}