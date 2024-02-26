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

node *delhead(node *head)
{
if(head==NULL)
return NULL;

if(head->next==head)
{
delete head;
return NULL;
}

head->val=head->next->val;
head->next=head->next->next;
delete head->next;
return head;

}

node *delatk(node *head,int k)
{
    if(head==NULL)
    return NULL;
    if(k==1 && ((head->next)!=head))
    {
head->val=head->next->val;
head->next=head->next->next;
delete head->next;
return head;

    }
    if(head->next == head)
    {
        delete head;
        return NULL;
    }

    int pos=0;
    node *cur=head;
    while(pos!=k-1)
    {
        if(pos==k-2)
        {
            cur->next=cur->next->next;
            delete cur->next;
            return head;
        }   
        cur=cur->next;
        pos++;
    }
    return head;

}




int main()
    {
        int i,n,ele,k;
       
        node *last=NULL,*head=NULL,*j;
        cout<<"enter the number of elements";
        cin>>n;
        for(i=0;i<n;i++)
        {
        cout<<"enter the elements";
        cin>>ele;
        head=endd(head,ele);
        }
        //  head=delhead(head);
        cout<<"enteer the element at whicch position  you want to deleete";
        cin>>k;
        head=delatk(head,k);
        traverse(head);

       
    
    
    }
