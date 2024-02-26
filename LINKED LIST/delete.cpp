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


node *del(node *head)
{
    if(head==NULL)
    return head;

     else
     {
    node *temp=head->next;
     delete head;
     head=temp;

     return head;
     }

}

node *delend(node *head)
{
    node *i;
    if(head==NULL || head->next==NULL)
    return head->next;

    else{
        for(i=head;i!=NULL;i=i->next)
        {
           if(i->next->next==NULL)
           break;
        }
        delete i->next;
        i->next=NULL;
        return head;
    }
}

int main()
    {
        int ele;
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
   head=delend(head);
    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

    
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }






