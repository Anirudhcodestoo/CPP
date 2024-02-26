#include<iostream>
#include<unordered_map>
#include<stack>

using namespace std;
struct node
{
    char val;
    node *next,*prev;
    node(char x)
    {
        val=x;
        next=NULL;
        prev=NULL;
       
    }
};

node *end(node *last, char ele)
{
    node *neww=new node(ele);
    if (last!=NULL)
     last->next=neww;
    return neww;
}
node *recursive(node *head)
{
   node *newhead;
    if(head==NULL)
    {
    newhead=head;
    return newhead;
    }
    if(head->next==NULL)
    {
  newhead=head;
    return newhead;
    }
    node *temp=head;
    node *curr=temp->next;
    recursive(curr);
    curr->next=temp;
    head->next=NULL;

   return newhead;
}

bool palindrome(node *head)
{
     stack <char> s;
     node *cur;
    for(cur=head;cur!=NULL;cur=cur->next)
    s.push(cur->val);
    for(cur=head;cur!=NULL;cur=cur->next)
    {
    if(cur->val!=s.top())
    return false;
    else 
    s.pop();
    }
  return true;
}
bool efficient(node *head)
{
   node *slow=head,*fast=head,*curr=head;
   while(fast!= NULL && fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
   }
  slow= recursive(slow);

while(slow!=NULL && slow->next!=NULL)
{
    if(curr->val!=slow->val)
    return false;
   slow=slow->next;
   curr=curr->next;
}
return true;

}
int main()
    {        
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;
        node *head=NULL,*last=NULL;
        int j,n,size;
        string s;
        node *i;
        cout<<"enter the element you want to insert";
        cin>>s;
        size=s.length();
        for(j=0;j<size;j++)
        {
        last=end(last,s[j]);
        if(j==0) head=last;
        }

       cout<<efficient(head);


    
    // for(i=head;i!=NULL;i=(i->next))
    // cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
