#include <iostream>
using namespace std;
struct deque{
    int size,cap,front,rear;
    int *a;
    deque(int c)
    {
        cap=c;
        a = new int[c];
        front=size=0;
    }
    bool isfull()
    {return (cap==size);}
    bool isempty()
    {
        return (size==0);
    }
    int getrear()
    {
        return ((front+size-1)%cap);
    }
    void getsize()
    {

    }
    void push_front(int ele)
    {
        if(isfull())
        return;
        else
        {
        front=(front-1+cap) %cap;
        a[front]=ele;
        size++;
        }
    }
    void push_back(int ele)
    {
         if(isfull())
        return;
        else
        {
        rear=(rear+size)%cap;
        a[rear]=ele;
        size++;
        }
    }
    void pop_back()
    {
        if(isempty())
        return;
        else 
        {
            rear=(getrear()-1+cap)%cap;
            size--;
        }
    }
    void pop_front()
    {
        if(isempty())
        return;
        else 
        {
            front=front-1   
            size--;
        }
    }
};


int main(){
    // can insert at begin and end;
     
    return 0;
}