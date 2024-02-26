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


void construct(node *root)
{

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