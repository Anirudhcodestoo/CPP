#include <iostream>
#include<stack>

using namespace std;
void prevgreater(int arr[],int n)
{
    stack <int> s;
    int i,prevgreat;
    s.push(arr[0]);
    cout<<"-1";
    for(i=1;i<n;i++)
    {
      while(s.empty()==false && arr[i]>s.top())
      s.pop();

      prevgreat=(s.empty()) ? -1 : s.top();
      cout<<prevgreat<<"\t";
      s.push(arr[i]); 

    }
}
int main(){
    int i,n,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    prevgreater(arr , n);
    return 0;
}