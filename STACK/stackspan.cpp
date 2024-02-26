#include <iostream>
#include <stack>
using namespace std;
void stack(int )
{
    int span=1,i;
    stack s;
    s.push(0);
    cout<<1;
    for(i=1;i<n;i++)
    {
        while(s.isempty()==false && s.top()<a[i])
        {
            s.pop();
        }
        span= (s.isempty()) ?   i+1 : i-s.top();
        cout<<span;
        s.push(i);
    }

}

int main(){
    stack s;
    int i;
    
    return 0;
}