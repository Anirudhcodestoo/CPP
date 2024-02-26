#include <iostream>
#include<stack>
using namespace std;
void nextgreater(int a,int n)
{
    int i,span=1;
    stack <int>s;
    s.push(a[n-1]);
    cout<<"-1";

    for(i=n-2;i>=0;i--)
    {
        while(s.empty()==false && a[i]>=s.top())
        s.pop();
        span= (s.empty()) ? -1: s.top();
        cout<<span<<"\t";
        s.push(a[i]);
    }
}

int main(){
    int i,n,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    nextgreater(arr,n)

    return 0;
}