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

void traverse(node *head)
{


    if(head==NULL)
    return;
    
node *curr=head;

    do
    {
      cout<<curr->val<<" ";
      curr=curr->next;
    }while(curr!=head);

}
node *beg(node *head,int vall)
{
     if(head==NULL)
    {
        node *temp=new node(vall);
        temp->next=temp;
        return temp;
    }

    node *neww =new node(head->val);
    neww->next = head->next;
    head->val=vall;
    head->next=neww;
    return head;

}
node *endd(node *head,int vall)
{
   
    if(head==NULL)
    {
        node *temp=new node(vall);
        temp->next=temp;
        return temp;
    }

    node *neww =new node(head->val);
    neww->next = head->next;
    head->val=vall;
    head->next=neww;
    return neww;

}


int main()
    {
        int i,n,ele;
       
        node *last=NULL,*head=NULL,*j;
        cout<<"enter the number of elements";
        cin>>n;
        for(i=0;i<n;i++)
        {
        cout<<"enter the elements";
        cin>>ele;
        head=beg(head,ele);
        }

        traverse(head);

       
    
    
    }
