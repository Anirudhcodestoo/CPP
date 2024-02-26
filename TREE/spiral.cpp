#include <iostream>
#include<queue>
#include <stack>
#include<deque>
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


// void method2(node *root)
// {
//     queue <node *> q;
//     deque<node *> dq
//     stack <int> s;
//     int i;
//     bool reversee=false;
//     q.push(root);
//     while(q.empty()==false)
//     {
//         int currsize=q.size();
//         for(i=0;i<currsize;i++)
//         {
//              node *curr=q.front();
//              q.pop();
//              if(reversee)
//              {
//                     s.push(curr->key);
//              }
//              else 
//              cout<<curr->key<<" ";
//              if(curr->left!=NULL)
//              q.push(curr->left);
//              if(curr->right!=NULL)
//              q.push(curr->right);   

//         }
//           while(s.empty())
//           {
//             cout<<s.top();
//             s.pop();
//           }
//            reversee!=reversee;
           
//         cout<<"\n";
//     }
// }
void alter(node *root)
{
  if (root==NULL)
  return;

      stack<node *> s1,s2;
      s1.push(root);
     while(s1.empty()!=true ||  s2.empty()!=true)
     {
          while(s1.empty()!=true)
          {
            cout<<s1.top()->key<<" ";
            if(s1.top()->left!=NULL)
            s2.push(s1.top()->left);
           if(s1.top()->right!=NULL)
            s2.push(s1.top()->right);
            s1.pop();
          }
           while(s2.empty()!=true)
          {
            cout<<s2.top()->key<<" ";
           if(s2.top()->right!=NULL)
            s1.push(s2.top()->right);
            if(s2.top()->left!=NULL)
            s1.push(s2.top()->left);
            s2.pop();
          }
          
    }
}
int main(){
  	node *root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
  alter(root);
    return 0;
}