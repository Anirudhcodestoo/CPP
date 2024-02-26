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

node *pairswap(node *head)
{
    if(head==NULL|| head->next==NULL)
    return head;

    if(head->next->next==NULL)
    {
         node *tempp=head->next;
        head->next->next=head;
        head->next=NULL;
        return tempp;
    }
    node *temp,*prev=head,*curr=head->next;
    head=head->next; 
    temp=curr->next;
    curr->next=prev;
    prev->next=temp;
    curr=curr->next->next;
   

    while(curr!=NULL && curr->next!=NULL)
    {
        prev->next=curr->next;
        temp=curr->next->next;
        curr->next->next=curr;
        curr->next=temp;
        curr=curr->next;
        prev=curr;
    }
    return head;

}
int main()
    {
        int ele,vall;
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;
        node *head=NULL,*last=NULL,*head2=NULL;
        int j,n;
        node *i;
        cout<<"enter number of elements you want to enter";
        cin>>n;
        for(j=0;j<n;j++)
        {
        cout<<"enter the element you want to insert";
        cin>>ele;
        last=end(last,ele);
        if(j==0) head=last;
        }

      head=pairswap(head);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
