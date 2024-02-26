#include <iostream>
#include<queue>
#include<climits>
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

int sizeee(node *root)
{
    if(root==NULL)
    return 0;
    return 1 + sizeee(root->left) + sizeee(root->right);

}


int sizee(node *root)

{
 queue <node *> q;
    int i,count=0;
    q.push(root);
    while(q.empty()==false)
    {
        int currsize=q.size();
        for(i=0;i<currsize;i++)
        {
             node *curr=q.front();
             q.pop();
             count++;
             if(curr->left!=NULL)
             q.push(curr->left);
             if(curr->right!=NULL)
             q.push(curr->right);

        }
}
      return count;
}
int main(){
    node *root= new node(10);
    root->left= new node(20);
    root->left->left=new node(40);
    root->right=new node (30);
    root->left->right=new node(50);
    root->right->right=new node (60);
    cout<<sizee(root);
        return 0;
}