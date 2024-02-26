#include<iostream>
#include<unordered_map>

using namespace std;
struct node
{
    int val;
    node *next,*prev;
    node(int x)
    {
        val=x;
        next=NULL;
        prev=NULL;
       
    }
};

node *end(node *last, int ele)
{
    node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}

node *sorted(node *head1,node *head2)
{
   node *curr1=head1,*curr2=head2;
   while(curr1!=NULL && curr2!=NULL)
   {
       if(curr1->val<curr2->val && curr1==head1)
       {
          curr2->next=curr1;
          node *newhead=head2;
       }
       if(curr1->val<curr2->val)
       {
        node *temp=curr1->next;
        curr1->next=curr2;
        curr2->next=temp;
        curr2=curr2->next;
        if(curr1->next==NULL)
        break;
        curr1=curr1->next;
       }
       else if(curr1->next==NULL){
        curr1->next=curr2;
        curr1=curr1->next;
        curr2=curr2->next;
       }
   }

}
int main()
    {
        int ele,vall,size;
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;
        node *head=NULL,*last=NULL;
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
      

       head=sorted(head);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
