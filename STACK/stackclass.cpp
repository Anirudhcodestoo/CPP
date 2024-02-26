#include <iostream>
#include <vector>
using namespace std;

class mystack{
    int i,val,item,top=-1;
    vector<int> myvect;
    
    void push(int item)
     {
      if(top+1==myvect.size())
      return 
             myvect.push_back(item);
             top++;
      }

        int pop()
        { if(top==-1)
        return -1;

        int temp= myvect[top];
        myvect.pop_back();
        top--;
        return temp;
          }
         int peek()
         {
          if(top==-1)
          return myvect.back();
         }

 int size()
  {
  return top+1;
  }
    
  bool isempty()
  {
    return top==-1;
  }


};

struct mystackk{
  int i,item,cap,top=-1;
  int *arr;
  mystackk(int sizee)
  {
    arr=new int[sizee];
    cap=sizee;
  }
  void push(int val)
  {
    top++;
    arr[top]=val;

  }

  int pop()
  {
    if(top==-1)
    return INT_MAX;

    int res=arr[top];
    // delete arr[top];
    top--;
    return res;
  }

  int size()
  {
  return top+1;
  }
  int peek()
  {
    return arr[top];
  }
  bool isempty()
  {
    return top==-1;
  }
};


struct node
{
    int val;
    node *next;
    node(int vall)
    {
      val=vall;
      next=NULL;
    }

};

struct miestack
{
  node *head=NULL;
  int sz=0;
     void push(int ele)
     {
    node *neww=new node(ele);
    neww->next=head;
    head=neww;
    sz++;

     }

     int pop()
     {
      if(head==NULL)
      return INT_MAX;

      int temp=head->val;
      node *del=head;
      head=head->next;
      delete del;
      sz--;
      return temp;

     }
int peek()
{
  if(head==NULL)
  return INT_MAX;
  else return head->val;  
}
     int size()
     {
      return sz;
     }
     bool isempty()
     {
      return (head==NULL);
     }
};