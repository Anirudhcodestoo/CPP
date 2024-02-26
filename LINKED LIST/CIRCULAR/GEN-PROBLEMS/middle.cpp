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

int middle(node *head)
{
    
    if(head==NULL)
    return 0;
    if(head->next==NULL)
    return head->val;

    node *cur,*fast=head,*slow=head;
    while(fast!=NULL || fast->next!=NULL)

{
    fast=fast->next->next;
    slow=slow->next;
    
}  return slow->val;
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
    while(count!=(len-endd+1) )
    {
        curr=curr->next;
        count++;

    }
     
     cout<<curr->val;
}


int main()
    {
        int ele,vall;
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
        // cout<<"enter the ele you want to sort insert";
        // middle(head);
        int endd;
        cout<<"enter the ele you want to find from end";
        cin>>endd;
        printend(head,endd);


    
    // for(i=head;i!=NULL;i=(i->next))
    // cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
