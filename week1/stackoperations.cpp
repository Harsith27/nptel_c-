#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> p;
    cout<<"The operations are:"<<endl<<"1.Insert\n2.Delete\n3.Empty or not\n4.Top most Element\n5.display\n5.exit\n";
    while(1)
    {
        int ch;
        cout<<"Enter your choice:";
        cin>>ch;
        switch (ch)
        {
        case 1 :int ele; 
                cout<<"Enter the element to insert : ";
                cin>>ele;
                s.push(ele);
                break;
        case 2 :if(s.empty())
                {
                    cout<<"The stack is empty nothing to delete"<<endl;
                    break;
                }
                cout<<"The deleted element is :"<<s.top()<<endl;
                s.pop();
                break;
        case 3 :if(!s.empty())
                    cout<<"The stack is not empty"<<endl;
                else
                    cout<<"The stack is empty"<<endl;
                break;
        case 4 :if(s.empty())
                {
                    cout<<"The stack is empty nothing to display"<<endl;
                    break;
                }
                cout<<"The top most element is :"<<s.top()<<endl;
        case 5 :if(s.empty())
                {
                    cout<<"The stack is empty nothing to display"<<endl;
                    break;
                }
                p=s;
                cout<<"The elements in the Stack are"<<endl;
                while(!p.empty())
                {
                    cout<<p.top();
                    p.pop();
                }
                break;
        case 6 :exit(0);
                break;
        default:cout<<"Invalid input"<<endl;
                break;
        }
    }
}