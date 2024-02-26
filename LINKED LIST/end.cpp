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

// void insert(node *head,int ele)
// {
//     node *i;
//     node *neww= new node(ele);
//     for(i=head;i!=NULL;i=i->next)
//     {
//         continue;
//     }
// i->next=neww;

//     for(i=head;i!=NULL;i=(i->next))
//      cout<<(i->val);
// }

node *end(node *last, int ele)
{
    node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}

int main()
    {
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;

        // cout<<"enter the element you want to insert";
        // cin>>ele;
        // node *head=new node(10);
        // head->next=new node(20);
        // head->next->next=new node(30);
        // insert(head,ele);
      node *last=NULL;
      node *j,*head;
      int i,ele,n;
       cout<<"enter the elemtns you want to enter";
       cin>>n;
       for(i=0;i<n;i++)
       {
        cout<<"enter the ele";
        cin>>ele;
        last=end(last,ele);
        if(i==0) head=last;

       }

for(j=head;j!=NULL;j=(j->next))
{
    cout<<j->val;
}
        
          while (last != NULL)
    {
        node *temp = last;
        last = last->next;
        delete temp;
    }

    }
