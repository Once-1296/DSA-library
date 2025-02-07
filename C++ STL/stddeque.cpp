#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dqu;
    cout<<"Enter Number of elements: ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"Enter element "<<dqu.size()+1<<": ";
        int t;
        cin>>t;
        dqu.push_back(t);
    }
    char c = 'y';
    do
    {
        cout<<"Choose option:\n1.Display Front\n2.Display Back\n3.Pop Front\n4.Pop Back\n5.Size\n";
        int opt;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<dqu.front();
            break;
        case 3:
            if(dqu.empty())cout<<"Empty deque.";
            else 
            {
                cout<<dqu.front();
            dqu.pop_front();
            }
            break;
            case 2:
            cout<<dqu.back();
            break;
        case 4:
            if(dqu.empty())cout<<"Empty deque.";
            else 
            {
                cout<<dqu.back();
            dqu.pop_back();
            }
            break;
        case 5:
            cout<<dqu.size();
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
        cout<<dqu.front()<<"\n";
        dqu.pop_front();
    }
    return 0;
}
