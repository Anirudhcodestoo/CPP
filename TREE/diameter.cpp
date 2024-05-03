#include <iostream>
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
int maxx;
int height(node *root)
{
    if(root==NULL)
    return 0;
    else
    return max(height(root->left),height(root->right)+1);
}
int diameter(node *root)
{
if(root==NULL)
return 0;   
else    
int d1=height(root->left),height(root->right)+1;
int d2=diameter(root->left);
int d3=diameter(root->right);
return max(d1,max(d2,d3));

}

// use hasshing to 
int main(){
    node *root= new node(10);
    root->left= new node(20);
    root->left->left=new node(40);
    root->right=new node (30);
    root->left->right=new node(50);
    root->right->right=new node (60);
    cout<<diameter (root);

        return 0;
}