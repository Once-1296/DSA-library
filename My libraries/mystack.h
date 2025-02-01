#ifndef MYSTACK
#define MYSTACK
template<typename T>class Node
{
    public:
    Node(T v)
    {
        this->val = v;
        next = nullptr;
    }
    T val;
    Node* next;
};
template<typename T>class myStack
{
    public:
    Node <T>*top;
    int size;
    myStack()
    {
        top = NULL;
        size =  0;
    }
    void push(T x)
    {
        Node <T>*newnode = new Node(x);
        newnode->next = top;
        top = newnode;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            std::cout<<"No elements in the stack\n";
            return;
        }
        Node <T>*tmp = top->next;
        delete top;
        top=tmp;
        size--;
    }
    T getsize(){return size;}
    bool empty(){return size==0;}
    T gettop(){return top->val;}
};
#endif