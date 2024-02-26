#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void subarray (int a[],int n, int k)
{
   int i;
   deque <int> dq;
   for(i=0;i<k;i++)
   {
    while (a[i]>=arr[dq.back()] && !dq.empty())
    {
    dq.front();
    dq.push_front(a[i]);
    }
    else 
    push_back(i);

   }
   for(i=1;i<=n-k;i++)
   {
    if(i==k)
    {
    dq.pop_front();
    if(a[dq.front()]<a[i])
    dq.push_front(a[i]);
    else
    
    }
    
    
    if(a[i]>dq.front())
    {
        dq.front();
    dq.push_front(a[i]);
    }

   }
}
int main(){
    int i,a[50],n,k;
    cout<<"enter subarray size";
    cin>>k;
    cout<<"enter the size of the array";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    subarray(a,n,k);

    
    return 0;
}