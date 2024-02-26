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

// node *reversee(node *head)
// {
//     if(head == NULL)
//     return NULL;
//     if(head->next==NULL)
//     return head;
//     if(head->next->next==NULL)
//     {  
//         node *temp=head->next;
//         head->next->next=head;
//         head->next=NULL;
//         return temp ;

//     }
//     node *neksht,*b4,*first=head->next, *last=head->next->next,*before=head;
//     head->next=NULL;
//     while(first!=NULL)
//     {
//         neksht=last->next;
//         last->next=first;
//         first->next=before;
//         first=neksht;
//         if(neksht==NULL)
//     return last;
//         before=last;
//         last=neksht->next;
//         if(last==NULL)
//         {
//             first->next=before;
//         return first;
        
//         }
//     }
// }

node *simpler(node *head)
{
   node *curr,*nekst=head->next,*temp,*prevcurr;
   if(head==NULL || head->next==NULL)
   return head;
   prevcurr=nekst;
   temp=head->next->next;
   head->next->next=head;
   head->next=NULL;
   curr=temp;
   if(curr==NULL)
   return prevcurr;
   nekst=curr->next;
   if(nekst==NULL)
    curr->next=prevcurr;
   
   while(nekst!=NULL && curr!=NULL)
   {
      temp=curr->next->next;
      nekst->next=curr;
      curr->next=prevcurr;
      prevcurr=nekst;
      curr=temp;
      if(curr==NULL)
      return prevcurr;
      nekst=temp->next;
      if(nekst==NULL)
      {
      curr->next=prevcurr;
      break;
      }
      
   }
   return curr;

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
    head=recursive(head);

    
    for(i=head;i!=NULL;i=(i->next))
    cout<<(i->val);

       
        
          while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
