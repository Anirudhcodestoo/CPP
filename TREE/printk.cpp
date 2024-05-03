#include <iostream>
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
void printk(node *root, int  k)
{
if(root ==NULL)
return;

if(k==0)
{
cout<<root->key;
return ;
}
printk(root->left,k--);
printk(root->right,k--);
}
int main(){
    int k;
    cin>>k;
    node *root=
printk(root,k);
    return 0;
}