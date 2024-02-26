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

void level(node *root)
{
queue <node *> q;
q.push(root);
while(q.empty()!=true)
{
    node *x=q.front(); 
    cout<<x->key;
    q.pop();
    if(x->left!=NULL)
    q.push(x->left);
    if(x->right!=NULL)
    q.push(x->right);
}
}
int main(){
    int i;

    return 0;
}