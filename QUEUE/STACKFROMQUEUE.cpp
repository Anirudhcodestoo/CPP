#include <iostream>
#include<queue>
using namespace std;
struct stack{
    queue <int> q2;

    int top()
    {
  return q2.front();
    }
    void pushh(int x)
    {
        
        queue <int> q3;
        q3.push(x);
        while(q2.empty()==false)
        {
            q3.push(q2.front());
            q2.pop();
        }
        q2.swap(q3);
    }
    void popp()
    {
    q2.pop();
    }
    
};
int main(){
   
stack s;
s.pushh(1);
s.pushh(2);
cout<<s.top();
s.pushh(3);
cout<<s.top();
s.popp();
s.popp();
cout<<s.top();
    return 0;
}