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

node *lru(node *head,int ele,int size)
{
    unordered_map<int,node*> h;
    int count=0;
    node *originalhead;

    if(head==NULL)
    {
    head=new node(ele);
    originalhead=head;
    count++;
    }
    node *curr;
    if(count<size)
    {
   head->next=new node(ele);
   head->next->prev=head;
   head=head->next;
   count++;
   h[ele]=head;
  
    }

    if(h.find(ele)!=h.end())
    {
       node *tochange=h[ele];
       tochange->next->prev=tochange->prev;
       tochange->prev->next=tochange->next;
       head->next=new node(ele);
       head=head->next;
       delete(tochange);

    }
    if(h.find(ele)==h.end() && count>=size)
    {
        node *temp=originalhead;
        h.erase(originalhead->val);
        originalhead=originalhead->next;
        delete(temp);
        head->next=new node(ele);
        head=head->next;
        h[ele]=head;
    }
    return head;

}
int main()
    {
        int ele,vall,size;
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
      
cout<<"enter size of the cache";
cin>>size;
       head=lru(head,ele,size);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
