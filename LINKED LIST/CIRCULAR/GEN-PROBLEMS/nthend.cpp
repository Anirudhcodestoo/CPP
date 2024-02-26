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



void printend(node *head,int endd)
{
    if(head==NULL)
    return;
    node *curr=head, *i;
    int count=1,len=1;
    for(i=head;(i->next)!=NULL;i=i->next)
    {
        len++;
    }

    if(endd>len)
    return; 
    while(count < (len-endd+1) )
    {
        curr=curr->next;
        count++;

    }
     
     cout<<curr->val;
}

void twopointer(node *head,int endd)
{
    if(head==NULL)
    return;
    if(head->next==NULL)
    {
    cout<<head->val;
    return;
    }

    node *cur,*fast=head,*slow=head;
    int count=0;
    for(cur=head;(cur!=NULL) && (count!=endd);cur=cur->next)
    {
             fast=fast->next;
             count++;
    }
    if(count<endd)
    return;
   
     
     while(fast!=NULL)
     {
        fast=fast->next;
        slow=slow->next;
     }
     cout<<slow->val;
}


int main()
    {
        int ele,vall;
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
        // cout<<"enter the ele you want to sort insert";
        // middle(head);
        int endd;
        cout<<"enter the ele you want to find from end";
        cin>>endd;
      twopointer(head,endd);


    
    // for(i=head;i!=NULL;i=(i->next))
    // cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
