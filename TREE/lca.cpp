#include <iostream>
#include <vector>
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
        bool path(node *root,vector p<node *>,int n1)
        {
            if (root==NULL)
            return;
            p.push_back(root);
            if(root->key == n)
            return true;
            if(path(root->left) || path(root->right))
            return true;
            p.pop_back();
            return false;   
            
        }
node  lca(node *root,int n1,int n2)
{
    vector <node *> path1,path2;
    if(findpath(root,path1,n1)==false || findpath(root,path2,n2)==false)
    return NULL;
    for(int i=0; (i<path1.size()&& i<path2.size()) , i++)
    {
        if(path1[i+1]!=path2[i+1])
        return path[i];
    }
    return NULL;
}

node *lcaeFFICIENT(node *root, int n1 ,int n2)
{
    if(root==NULL)
    return NULL ;
    if(root->key==n1 || root->key==n2)
     return root;
     node *lca1=lcaeFFICIENT(root->left);
     node *lac2=lcaeFFICIENT(root->right);
     if(lca1!=NULL && lca2!=NULL)
     return root;
     if(lac1!=NULL)
     return lca1;
     else return lca2;

}
int main(){
    
    return 0;
}