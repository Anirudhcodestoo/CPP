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
node *insert(node *last,int ele)
{
     node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}

void traverse(node *head)
{
    // node *curr;
    // if(head->next==NULL)
    // {cout<<head->val;
    // return; }

    // for(curr=head;(curr->next)!=head;curr=curr->next)
    // {
    //    cout<<curr->val; 
    // }

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
    // node *neww=new node(ele),*i;


    // if(head==NULL)
    // {
           // neww->next==head
           // return neww;
     // }
    // return NULL;                                             NAIVE;
    // for(i=head;(i->next)!=head;i=i->next)
    // {
    // }
    // i->next=neww;
    // neww->next=head;
    // return neww;

if (head==NULL){
   node *temp=new node(vall);
   temp->next=temp;
   return temp; 
}
node *neww=new node(head->val);
neww->next=head->next;
head->val=vall;
head->next=neww;
return head;                          /// effective or you can store tail pointer also;;;;;

}

node *endd(node *head,int vall)
{
   
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        node *temp=new node(vall);
        head->next=temp;
        temp->next=head;
        return head;
    }

    node *neww =new node(head->val);
    neww->next=head->next;
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


int main()
    {
        int i,n,ele,vall;
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;

        node *last=NULL,*head=NULL,*j;
        cout<<"enter the number of elements";
        cin>>n;
        for(i=0;i<n;i++)
        {
      cout<<"enter the elements";
      cin>>ele;
      last=insert(last,ele);
      if(i==0) head=last;
        }
        cout<<"enter the val you want to isnert at the end";
        cin>>vall;
        head=endd(head,vall);
        traverse(head);
    
          while (last != NULL)
    {
        node *temp = last;
        last = last->next;
        delete temp;
    }
    }
