 #include<iostream>
 #include<unordered_set>

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



bool loop(node *head)
{
    node *i,*temp=head,*common=new node(0);
    for(i=head;i!=NULL;i=temp)
    {
        if(temp->next==common)
        return true;
        temp=i->next;
        i->next=common;
 
    }
    return false;

}

node *remLENloop(node *head)
{
    node *curr=head,*slow=head,*fast=head;
    while(fast!=NULL  && fast->next!=NULL )
    {
        
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        break;

    }
    if(fast!=NULL || fast->next!=NULL)
    return;
    else{
        slow=head;
        while(fast->next!=slow->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
       return slow->next;
    }

   
}




bool faster(node *head)
{
    unordered_set<node *> s;
    node *cur;
    for(cur=head;cur!=NULL;cur=cur->next)
    {
         if(s.find(cur)!=s.end())
         return true;
         s.insert(cur);
    }
    return false;

}




bool floyd(node *head)
{
    node *cur=head,*slow=head,*fast=head;
    while(cur!=NULL && cur->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
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
        
        
      
      cout<<loop(head);


    
    // for(i=head;i!=NULL;i=(i->next))
    // cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
