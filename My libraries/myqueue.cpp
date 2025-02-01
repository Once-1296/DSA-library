#include<iostream>
#include"myqueue.h"
using namespace std;
int main(){
    myQueue <int>qu;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<qu.getsize()+1<<": ";
        int t;
        cin>>t;
        qu.push(t);
    }
    char c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Front\n2.Pop\n3.Size\n";
        int opt;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<qu.getfront();
            break;
        case 2:
            if(qu.empty())cout<<"Empty queue.";
            else 
            {
                cout<<qu.getfront();
            qu.pop();
            }
            break;
        case 3:
            cout<<qu.getsize();
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!qu.empty())
    {
        cout<<qu.getfront()<<"\n";
        qu.pop();
    }
    myQueue <float>quf;
    cout<<"Enter Number of elements: ";
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<quf.getsize()+1<<": ";
        float t;
        cin>>t;
        quf.push(t);
    }
    c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Front\n2.Pop\n3.Size\n";
        int opt;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<quf.getfront();
            break;
        case 2:
            if(quf.empty())cout<<"Empty queue.";
            else 
            {
                cout<<quf.getfront();
            quf.pop();
            }
            break;
        case 3:
            cout<<quf.getsize();
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!quf.empty())
    {
        cout<<quf.getfront()<<"\n";
        quf.pop();
    }
    return 0;
}