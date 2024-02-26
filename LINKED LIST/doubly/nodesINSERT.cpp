#include <iostream>
using namespace std;
struct node
{
     node *prev;
     node *next;
     int data;
     node(int x)
     {
        data=x;
        prev=NULL;
        next=NULL;
     }
};

node *beginn(node *head,int ele)
{
    node *neww=new node(ele);
    neww->next=head;
    if(head!=NULL)
    head->prev=neww;
    return head;
}

node *insertend(node *head,int ele)
{
node *curr;
node *newwww=new node(ele);
if(head==NULL)
return newwww;
for(curr=head;curr!=NULL;curr=curr->next)
{
    if(curr->next==NULL)
    break;
}

curr->next=newwww;
newwww->prev=curr;

return head;
}

node *reverse(node *head)
{
node *curr,*temp=NULL;
for(curr=head;curr!=NULL;curr=curr->prev)
{
    temp=curr->prev;
    curr->prev=curr->next;
    curr->next=temp;
}
if(temp!=NULL)
head=temp->prev;
return head;

}

node *deletee(node *head)
{
   if(head==NULL )
   return  NULL;
   if(head->next==NULL)
   {
   delete head;
   return NULL;
   }

   node *temp= head;
   head=head->next;
   head->prev=NULL;
   delete temp;
   return head;

}

node *delend(node *head)
{
    node *i=NULL;
      if(head==NULL)
      return NULL;
      if (head->next == NULL)
      {
        delete head;
        return NULL;
      }
        else{
            for(i=head;i!=NULL;i=i->next)
            {
                if(i->next==NULL)
                {
                i->prev->next=NULL;
                break;
                }
            }
            delete i;
            return head;
        }

}
int main()
{
    int ele,n,i;
    node *j;
    //  node *head= new node(10);
    //  head->next=new node(20);
    //  head->prev=NULL;
    //  head->next->next=new node(30);
    //  head->next->next->next=NULL;
    //  head->next->next->prev=head->next;
    //  head->next->prev=head;
    node *head=NULL;
    cout<<"enter the number of ele you want to insert";
    cin>>n;
    for(i=0;i<n;i++)
    {
     cout<<"enter the ele you want to insert at end";
     cin>>ele;
     head=insertend(head,ele);
    }
   head=delend(head);
  for(j=head;j!=NULL;j=(j->next))
{
    cout<<j->data;
}
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
     



}