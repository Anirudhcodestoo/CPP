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


bool summ(node *root)
{
      if(root==NULL)
      return true ;
     if(root->left==NULL &&root->right==NULL)
     return true;
     int sum=0;
     if(root->left!=NULL)
     sum+=root->left;
     if(root->right!=NULL)
     sum+=root->right;
     return(sum==root->key && summ(root->left) &&summ(root->right));


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