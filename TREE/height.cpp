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
int maxx;
int height(node *root)
{
    if(root==NULL)
    return 0;
    else
    return max(maxx=max(height(root->left),max)x,height(root->right)+1);
}
int main(){
    
    return 0;
}