#include<iostream>
#include<stack>
using namespace std;
class Node
{
    public:
    Node(int v)
    {
        this->val = v;
        next = nullptr;
    }
    int val;
    Node* next;
};
class myStack
{
    public:
    Node* top;
    int size;
    myStack()
    {
        top = nullptr;
        size =  0;
    }
    void push(int x)
    {
        Node *newnode = new Node(x);
        newnode->next = top;
        top = newnode;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            cout<<"No elements in the stack\n";
            return;
        }
        Node *tmp = top->next;
        delete top;
        top=tmp;
        size--;
    }
    int getsize(){return size;}
    bool empty(){return size==0;}
    int gettop(){return top->val;}
};
int main(){
    myStack st;
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
    return 0;
}