#include <cmath>
#include <iostream>
using namespace std;

int power(int n, int x)
{
    int res=1;
  int i;
  for(i=0;i<log2(x);i++)
  {
    res=res*n;
  }
  for(i=0;i<(x-i);i++)
  {
    res=res*n;
  }
  return res;
}
int main(){
    int n,x;
    cout<<"enter input number";
    cin>>n;
    cout<<"enter number of which power must be raised";
    cin>>x;
    cout<<power(n,x);
    return 0;
}