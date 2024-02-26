#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int choclate(int a[],int n,int m)
{
      int res=INT_MAX,diff,i;
      if(m>n)
      return -1;
     sort(a,a+n);
     for(i=0;i<n-m+1;i++)
     {
        diff=a[i+m-1]-a[i];
        res=min(res,diff);
     }
     return res;
  
}


int main(){
    int m,n,i,a[50];

 cout<<"enter the number of elements";
 cin>>n;
 cout<<"enter the children choclate  must be ditributed";
 cin>>m;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }  

    cout<<choclate(a,n,m);


    return 0;
}