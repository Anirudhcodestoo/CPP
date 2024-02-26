#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int mindiff(int a[],int n)
{
  sort(a,a+n); 
  int i,res=INT_MAX,diff;
  for(i=0;i<n-1;i++)
  {
     diff=abs(a[i+1]-a[i]);
     res=min(res,diff);
  }
  return res;
  
}


int main(){
    int k,n,i,a[50];

 cout<<"enter the number of elements";
 cin>>n;
 cout<<"enter the kth smallest elemetn you wan to find out";
 cin>>k;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }  

    cout<<mindiff(a,n);


    return 0;
}