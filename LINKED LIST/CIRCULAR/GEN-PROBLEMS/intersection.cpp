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

int intersection(node *head1,node *head2)
{
    // -------?? PUT IN  A HASH MAP AND SEARCH FOR CURR ITEM
    // IF PRESENT THEN IT MEANS THAT THAT POINT INTERSECTION THEN RETURN 

   node *curr1=head1,*curr2=head2;
   int count1=0,count2=0,countabs=0,countgen=0;
   while(curr1!=NULL)
   {
    count1++;
    curr1=curr1->next;
   }
   while(curr2!=NULL)
   {
    count2++;
    curr2=curr2->next;
   }


   curr1=head1,curr2=head2;
   countabs=abs(count1-count2);


   if(count1>count2)
   {
    while(countgen!=countabs)
    {
        curr1=curr1->next;
        countgen++;
    
    }
   }
   else 
   {
    while(countgen!=countabs)
    {
        curr2=curr2->next;
        countgen++;
    
    }
   }

      while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->val==curr2->val)
        return curr1->val;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
  

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
        for(j=0;j<n2;j++)
        {
        cout<<"enter the element you want to insert";
        cin>>ele;
        last2=end(last2,ele);
        if(j==0) head2=last2;
        }

       cout<<intersection(head,head2);


    
    // for(i=head;i!=NULL;i=(i->next))
    // cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
