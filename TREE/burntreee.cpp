#include <iostream>
#include <vector>
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
        int res=0;

int burntree(node *root, int leaf,int &distance)
{
    if(root==NULL)
    return 0;
    if(root->key==leaf)
    {distanc=0; return 1;}
    int ldis=-1;
    int rdis=-1;
    int lh=burntree(root->left,leaf,ldis);
    int rh=burntree(root->right,leaf,rdis);
    if(ldis!=-1)
    {
       distance= 1+ldis;
       res=max(res,dist+rh);
    }
    if(rdis!=-1)
    {
       distance = 1+rdis;
       res=max(res,distance+lh);
    }
    return 1+max(lh,rh);
}
int main ()
{

}