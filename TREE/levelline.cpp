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



void method2(node *root)
{
    queue <node *> q;
    int i;
    q.push(root);
    while(q.empty()==false)
    {
        int currsize=q.size();
        for(i=0;i<currsize;i++)
        {
             node *curr=q.front();
             q.pop();
             cout<<curr->key<<" ";
             if(curr->left!=NULL)
             q.push(curr->left);
             if(curr->right!=NULL)
             q.push(curr->right);

        }
    }
}
int main(){

    return 0;
}