#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    cout<<"The reverse of the string is : " ;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}