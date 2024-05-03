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
        node *prevnode=NULL;
        node *bttodll(node *root)
        {
            if(root==NULL)
            return root;
            else{
                node *head=bttodll(root->left);
            if(prevnode==NULL)
            head=root;
                else 
                {
                    root->left=prevnode;
                    
                }

                prevnode=root;
                bttodll(root->right);
                return head;
            }
        }
        int main(){
            
            return 0;
        }