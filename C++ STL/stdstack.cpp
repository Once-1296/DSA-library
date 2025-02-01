#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<st.size()+1<<": ";
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
            cout<<st.top();
            break;
        case 2:
            cout<<st.top();
            st.pop();
            break;
        case 3:
            cout<<st.size();
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
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}
