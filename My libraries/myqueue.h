#ifndef MYQUEUE
#define MYQUEUE
template<typename T>class Node
{
    public:
    Node(T v)
    {
        this->val = v;
        prev = nullptr;
        next = nullptr;
    }
    T val;
    Node* prev,*next;
};
template<typename T>class myQueue
{
    public:
    Node <T>*front;
    Node<T>*back;
    int size;
    myQueue()
    {
        front = NULL;
        back = NULL;
        size =  0;
    }
    void push(T x)
    {
        Node <T>*newnode = new Node(x);
        newnode->prev = back;
        if(back)back->next = newnode;
        back = newnode;
        if(!front)front = back;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            std::cout<<"No elements in the queue\n";
            return;
        }
        Node <T>*tmp = front->next;
        delete front;
        front=tmp;
        size--;
    }
    T getsize(){return size;}
    bool empty(){return size==0;}
    T getfront(){
        if(!size)
        {
            std::cout<<"No elements in the queue\n";
            return NULL;
        }
        return front->val;}
};
#endif