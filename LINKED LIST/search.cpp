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

int findd(node *head,int find)
{
    int pos,count=0;
    node *cur;
    for(cur=head;cur!=NULL;cur=cur->next)
    {
            count++;
            if(cur->val==find)
            return count;
    }
    return -1;
}

int recurfindd(node *head,int find,int count)
{
    if (head==NULL)
    return -1;
    if(head->val==find)
    return count;
    return (head->next,find,count++);
    
}


int main()
    {
        int ele,find,j,n,count=1;
        node *head=NULL;
        node *i,*last=NULL;
        cout<<"enter the searching element";
        cin>>find;
        cout<<"enter number of elements you want to enter";
        cin>>n;
         for(j=0;j<n;j++)
       {
        cout<<"enter the ele";
        cin>>ele;
        last=end(last,ele);
        if(j==0) head=last;

       }
     

      cout<<recurfindd(head,find,count);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }






