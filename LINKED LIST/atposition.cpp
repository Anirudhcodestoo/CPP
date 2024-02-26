#include<iostream>

using namespace std;
struct node
{
    int val;
    node *next;
    node(int x)
    {
        val=x;
        next=NULL;
    }
};

node *insert(node *last, int vall)
{
   node *neww=new node(vall);
    if (last!=NULL)
     last->next=neww;
    return neww;
}


void position(node *head, int pos,int ele)
{  
     int count=2;
     node *neww=new node(ele),*i=head;
    if (pos == 1)
    {
        neww->next = head;
        head = neww;
        return;
    }
     for(i=head;((count<pos) && (i!=NULL));i=i->next)
     {
count++;
     } 

     if(i!=NULL)
     {
        neww->next=i->next;
        i->next=neww;
     }
    

    
}

int main()
    {

        int pos,ele,i,n,vall;
        node *j,*head,*last=NULL;
        cout<<"enter the position ";
        cin>>pos;
        cout<<"enter the ele at pos you want to enter";
        cin>>ele;
        cout<<"enter the number of elemens you wnat to insert";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"enter the element you want to insert";
            cin>>vall;
            last=insert(last,vall);
            if(i==0) head=last;
        }
        position(head,ele,pos);
        
for(j=head;j!=NULL;j=(j->next))
{
    cout<<j->val;
}
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    

    }
