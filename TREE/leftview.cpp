#include <iostream>
#include<queue>
#include<climits>
using namespace std;
int visited = 0;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};


void left(node *root)
{
queue <node *>q;
node *curr;
int i,sizee;
q.push(root);
while(q.empty()==false)
{
    sizee=q.size();
    for(i=0;i<sizee;i++)
    {

        curr=q.front();
        q.pop();
        if(i==0)
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
    }

}
}

int leftv(node *root,int level)
{
    if(root==NULL)
    return;
    if(level>visited)
    {
        visited=level;
        cout<<root->key<<" ";
    }
    leftv(root,level+1);



}
int main(){
    node *root= new node(10);
    root->left= new node(20);
    root->left->left=new node(40);
    root->right=new node (30);
    root->left->right=new node(50);
    root->right->right=new node (60);
   left(root);
   int level;
   visited(root,1);
   
        return 0;
}