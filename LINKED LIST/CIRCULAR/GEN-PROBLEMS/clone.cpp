#include<iostream>
#include<unordered_map>

using namespace std;
struct node
{
    int val;
    node *next,*random,*fresh;
    node(int x)
    {
        val=x;
        next=NULL;
        random=NULL;
        fresh=new node(x);  
    }
};

node *end(node *last, int ele)
{
    node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}

node *clone(node *head)
{
  node *curr=head;
//   unordered_map <node*,node*> m;
//   while(curr!=NULL)
//   {
//     m[curr]= new node(curr->val);
//     curr=curr->next;
//   }
//   while(curr!=NULL)
//   {
//     m[curr]->next=m[curr->next];
//     m[curr]->random=m[curr->random];
//     curr=curr->next;
//   }
//  return m[head];

 curr=head;
 while(curr!=NULL)
 {
    if(curr->next==NULL)
    curr->fresh->next=NULL;
    curr->fresh->next=curr->next->fresh;
    curr->fresh->random=curr->random->fresh;
    curr=curr->next;
 }
 return head->fresh;




}
int main()
    {
        int ele,vall;
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;
        node *head=NULL,*last=NULL,*head2=NULL,*last2=NULL;
        int j,n,n2;
        node *i;
        cout<<"enter number of elements you want to enter";
        cin>>n;
        cout<<"enter number of elements you want to enter";
        cin>>n2;
        for(j=0;j<n;j++)
        {
        cout<<"enter the element you want to insert";
        cin>>ele;
        last=end(last,ele);
        if(j==0) head=last;
        }
      

       head=clone(head);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
