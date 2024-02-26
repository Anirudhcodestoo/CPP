#include <iostream>
#include<queue>
#include<string>
using namespace std;
void create(int n)
{
    queue <string> q1;
    string curr;
    q1.push("5");
    q1.push("6");
    int count;
    for(count=0;count<n;count++)
    {
      curr=q1.front();
      cout<<curr;
      q1.push(curr+"5");
      q1.push(curr+"6");
      q1.pop();      
    }

}
int main(){


    return 0;
}