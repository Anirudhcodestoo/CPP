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
        int preindex=0;
        node *ctree(int in[],int pre[],int is,int ie)
        {
           if(is<ie)
           return NULL; 
           int inindex,i;
           for(i=is;i<=ie;i++)
           {
            if(in[is]==root->key)
            {
                inindex=i;
                break;
            }
           }
           root->left=ctree(in,pre,is,inindex-1);
           root->right=ctree(in,pre,inindex+1;ie);
           return root;

        }
        int main(){
            
            return 0;
        }