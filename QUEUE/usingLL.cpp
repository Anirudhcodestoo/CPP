#include <iostream>
using namespace std;
struct node{
   int val;
   node *next;
   node(int vall)
   {
    next=NULL;
    val=vall;
   }
};
struct queue
{
    node *front,*rear;
    int sz=0;

    queue()
    {
        front=rear=NULL;
    }
   int size()
   {
    return sz;
   }
   void push(int valll)
   {
    if(front==NULL)
    {
    node *temp=new node(valll);
    front=rear=temp;
    sz++;
    return;
    }
    else
    {
        node *temp=new node(valll);
        rear->next=temp;
        rear=temp;
        sz++;
        return;
    }
   }
   void pop()
   {
       if(front==NULL)
       return;
       node *temp=front;
       front=front->next;
       sz--;
       delete temp;
   }
};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.size();
    q.pop();
    cout<<q.size();

    return 0;
}