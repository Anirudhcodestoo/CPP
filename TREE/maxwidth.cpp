#include <iostream>
#include<queue>
using namespace std;
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

void newline(node *root)
{
queue <node *> q;
node *curr;
q.push(root);
q.push(NULL);
while(q.size()>1)
{
curr=q.front();
q.pop();
if(curr==NULL)
{
    cout<<"\n";
    q.push (NULL);  
    continue;
}
cout<<curr->key<<" ";
   if(curr->left!=NULL)
 q.push(curr->left);

  if(curr->right!=NULL)
 q.push(curr->right);

}
}



int method2(node *root)
{
    queue <node *> q;
    int i,maxsize=0;
    q.push(root);

    while(q.empty()==false)
    {
        int currsize=q.size();
        maxsize=max(maxsize,currsize);
        for(i=0;i<currsize;i++)
        {
             node *curr=q.front();
             q.pop();
             if(curr->left!=NULL)
             q.push(curr->left);
             if(curr->right!=NULL)
             q.push(curr->right);

        }

    }
    return maxsize;
}
int main(){
   node *root= new node(10);
    root->left= new node(20);
    root->left->left=new node(40);
    root->right=new node (30);
    root->left->right=new node(50);
    root->right->right=new node (60);
    cout<<method2(root);
    return 0;
}