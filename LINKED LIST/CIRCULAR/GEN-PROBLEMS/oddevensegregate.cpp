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

node *oddeven(node *head)
{
    node *curr=head,*odd,*even,*firstodd=NULL,*firsteven=NULL;
    int count=0,count1=0;
    while(curr!=NULL)
    {
            if((curr->val)%2==0)
            {
                      if(count==0)
                {
                even=curr;
                firsteven=curr; 
                count++;
                }
                else{
                even->next=curr;
                even=curr;
                }
            }
            else
            {   
                if(count1==0)
                {
                odd=curr;
                firstodd=curr;
                count1++;
                }
              else{
                odd->next=curr;
                odd=curr;
              }
            }
            curr=curr->next;
    }
    if(count==0 || count1==0) 
    return head;
    even->next=firstodd;
    odd->next=NULL;
    return firsteven;

}
int main()
    {
        int ele,vall;
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
       head=oddeven(head);


    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
