#include <iostream>
#include <algorithm>
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
int isbalanced(node *root)
{
    if (root==NULL) return 0;
    int lh=isbalanced(root->left);
    if(lh==-1)
    return -1;
    int rh = isbalanced(root->right);
    if(rh==-1)
    return -1;
    if(abs(lh-rh)>1)
    return -1;
return max(lh,rh)+1;

}
int height(node *root)
{
    if(root==NULL)
    return 0;
    else
    return max(height(root->left),height(root->right)+1);
}
bool balanced(node *root)
{
    if (root==NULL)
    return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && balanced(root->left) && balanced(root->right));
}
int main(){
    
    return 0;
}