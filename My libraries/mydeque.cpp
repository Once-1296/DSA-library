#include<iostream>
#include"mydeque.h"
using namespace std;
int main(){
    myDeque <int>dqu;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<dqu.getsize()+1<<": ";
        int t;
        cin>>t;
        dqu.push_front(t);
    }
    char c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Front\n2.Display Back\n3.Pop Front\n4.Pop Back\n5.Size\n6.Push Front\n7.Push Back\n";
        int opt;
        int tm;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<dqu.getfront();
            break;
        case 3:
            if(dqu.empty())cout<<"Empty dqueue.";
            else 
            {
                cout<<dqu.getfront();
            dqu.pop_front();
            }
            break;
         case 2:
            cout<<dqu.getback();
            break;
        case 4:
            if(dqu.empty())cout<<"Empty dqueue.";
            else 
            {
                cout<<dqu.getback();
            dqu.pop_back();
            }
            break;
        case 5:
            cout<<dqu.getsize();
            break;
        case 6:
            cout<<"Enter element to add: ";
            cin>>tm;
            dqu.push_front(tm);
            break;
        case 7:
            cout<<"Enter element to add: ";
            cin>>tm;
            dqu.push_back(tm);
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!dqu.empty())
    {
        cout<<dqu.getfront()<<"\n";
        dqu.pop_front();
    }
    myDeque <float>dquf;
    cout<<"Enter Number of elements: ";
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<dquf.getsize()+1<<": ";
        float t;
        cin>>t;
        dquf.push_front(t);
    }
    c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Front\n2.Display Back\n3.Pop Front\n4.Pop Back\n5.Size\n6.Push Front\n7.Push Back\n";
        int opt;
        float tm;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<dquf.getfront();
            break;
        case 3:
            if(dquf.empty())cout<<"Empty dqueue.";
            else 
            {
                cout<<dquf.getfront();
            dquf.pop_front();
            }
            break;
         case 2:
            cout<<dquf.getback();
            break;
        case 4:
            if(dquf.empty())cout<<"Empty dqueue.";
            else 
            {
                cout<<dquf.getback();
            dquf.pop_back();
            }
            break;
        case 5:
            cout<<dquf.getsize();
            break;
         case 6:
            cout<<"Enter element to add: ";
            cin>>tm;
            dquf.push_front(tm);
            break;
        case 7:
            cout<<"Enter element to add: ";
            cin>>tm;
            dquf.push_back(tm);
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!dquf.empty())
    {
        cout<<dquf.getfront()<<"\n";
        dquf.pop_front();
    }
    return 0;
}