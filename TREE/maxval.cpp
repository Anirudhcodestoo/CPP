#include <iostream>
#include<queue>
#include<algorithm>
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

int maxx(node *root)
{
   if(root==NULL)
   return INT_MIN   ;
   return max(root->key,maxx(root->left),maxx(root->right)) ;
}
int main(){
    node *root= new node(10);
    root->left= new node(20);
    root->left->left=new node(40);
    root->right=new node (30);
    root->left->right=new node(50);
    root->right->right=new node (60);
    cout<<maxx(root);
        return 0;
}