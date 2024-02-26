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
void traverse(node *head)  
{   node *i;
    
     for(i=head;i!=NULL;i=(i->next))
     cout<<(i->val);

}
int main()
    {
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;

        node *head=new node(10);
        // head->next=new node(20);
        // head->next->next=new node(30);
        traverse(head);
         while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    }
