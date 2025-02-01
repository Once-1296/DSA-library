#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>qu;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<qu.size()+1<<": ";
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
            cout<<qu.front();
            break;
        case 2:
            if(qu.empty())cout<<"Empty queue.";
            else 
            {
                cout<<qu.front();
            qu.pop();
            }
            break;
        case 3:
            cout<<qu.size();
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
        cout<<qu.front()<<"\n";
        qu.pop();
    }
    return 0;
}
