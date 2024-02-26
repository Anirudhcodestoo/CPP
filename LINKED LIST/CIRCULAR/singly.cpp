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
int main()
    {
        // node *head = new node(10);
        // node *temp1 = new node(20);
        // node *temp2 = new node(30);
        // head->next=temp1;
        // temp1->next=temp2;

        node *head=new node(10);
        node *temp1=new node(5);
        node *temp2=new node(20);
        node *temp3=new node(15);
        head->next=temp1;
        temp1->next=temp2;
        temp2->next=temp3;
        temp3->next=head;
    }
