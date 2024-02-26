#include<iostream>
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

void inorder(node *root)
{
if(root->left==NULL)
return;
else
inorder(root->left);
cout<<root->key;
inorder(root->right);
}


void preorder(node *root)
{
if(root->left==NULL)
return;
else 
cout<<root->key;
preorder(root->left);
preorder(root->right);
}

void postorder(node *root)
{
if(root->left==NULL)
return;
else
preorder(root->left);
preorder(root->right);
cout<<root->key;

}

void postorder(node *root)
{

}
int main()
{

    
    return 0;
}