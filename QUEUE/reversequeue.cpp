#include <iostream>
#include<queue>
using namespace std;
void reverse(queue<int> q1)
{
  queue<int>q2,q3;
  while(q1.empty()==false)
  {
    int x=q1.front();
    if(q2.empty())
    {
    q2.push(x);
    q1.pop();
  }
  else{
    q3.push(q1.front());
    while(!q2.empty())
    {
        q3.push(q2.front());
        q2.pop();
    }
    q2.swap(q3);
    q1.pop();
  }
}
}

void recursive(queue <int> q1)
{
  if(q1.empty())
  return;
    int x=q1.front();
    q1.pop();
    recursive(q1);
    q1.push(x);

}
int main(){
   


    return 0;
}