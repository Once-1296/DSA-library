#include<iostream>
#include"mystack.h"
using namespace std;
int main(){
    myStack <int>st;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<st.getsize()+1<<": ";
        int t;
        cin>>t;
        st.push(t);
    }
    char c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Top\n2.Pop\n3.Size\n";
        int opt;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<st.gettop();
            break;
        case 2:
            if(st.empty())cout<<"Empty stack.";
            else 
            {
                cout<<st.gettop();
            st.pop();
            }
            break;
        case 3:
            cout<<st.getsize();
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!st.empty())
    {
        cout<<st.gettop()<<"\n";
        st.pop();
    }
    myStack <float>stf;
    cout<<"Enter Number of elements: ";
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<stf.getsize()+1<<": ";
        float t;
        cin>>t;
        stf.push(t);
    }
    c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Top\n2.Pop\n3.Size\n";
        int opt;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<stf.gettop();
            break;
        case 2:
            if(stf.empty())cout<<"Empty stack.";
            else 
            {
                cout<<stf.gettop();
            stf.pop();
            }
            break;
        case 3:
            cout<<stf.getsize();
            break;
        default:
        cout<<"Invalid option.";
            break;
        }
        cout<<"\nContinue[y/n]?";
        cin>>c;
    } while (c=='y'||c=='Y');
    cout<<"Displaying remaining elements.\n";
    while(!stf.empty())
    {
        cout<<stf.gettop()<<"\n";
        stf.pop();
    }
    return 0;
}