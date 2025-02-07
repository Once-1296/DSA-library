#ifndef MYDEQUE
#define MYDEQUE
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
template<typename T>class myDeque
{
    public:
    Node <T>*front;
    Node<T>*back;
    int size;
    myDeque()
    {
        front = NULL;
        back = NULL;
        size =  0;
    }
    void push_back(T x)
    {
        Node <T>*newnode = new Node(x);
        newnode->prev = back;
        if(back)back->next = newnode;
        back = newnode;
        if(!front)front = back;
        size++;
    }
    void push_front(T x)
    {
        Node <T>*newnode = new Node(x);
        newnode->next = front;
        if(front)front->prev = newnode;
        front = newnode;
        if(!back)back = front;
        size++;
    }
    void pop_front()
    {
        if(size==0)
        {
            std::cout<<"No elements in the deque\n";
            return;
        }
        Node <T>*tmp = front->next;
        delete front;
        front=tmp;
        size--;
    }
    void pop_back()
    {
        if(size==0)
        {
            std::cout<<"No elements in the deque\n";
            return;
        }
        Node <T>*tmp = back->prev;
        delete back;
        back=tmp;
        size--;
    }
    T getsize(){return size;}
    bool empty(){return size==0;}
    T getfront(){
        if(!size)
        {
            std::cout<<"No elements in the deque\n";
            return NULL;
        }
        return front->val;
        }
    T getback(){
         if(!size)
        {
            std::cout<<"No elements in the deque\n";
            return NULL;
        }
        return back->val;}
};
#endif