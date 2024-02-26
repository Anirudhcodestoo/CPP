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

node *end(node *last, int ele)
{
    node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}

node *sortedd(node *head,int vall)
{
    node *neww=new node(vall),*cur;
   if(head=NULL)
    return neww;
    if(vall<head->val)
    {
       neww->next=head;
       return neww;
    }

    else{
        for(cur=head;(cur->next != NULL) && (cur->next->val < vall);cur=cur->next)
        {

        }
        neww->next=cur->next;
        cur->next=neww;

        return head;
    }
}
int main()
    {
        int ele,vall;
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;
        node *head=NULL;
        int j,n;
        node *i;
        cout<<"enter number of elements you want to enter";
        cin>>n;
        for(j=0;j<n;j++)
        {
        cout<<"enter the element you want to insert";
        cin>>ele;
        head=end(head,ele);

        }
        cout<<"enter the ele you want to sort insert";
        sortedd(head,vall);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
