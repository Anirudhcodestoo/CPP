#include <iostream>
#include <cmath>
using namespace std;


void merge(int a[],int b[],int n,int m)
{
   int i=0,j=0;
   while(i<n && j<m)
   {
      if((a[i]<=b[j]) && i<n )
      {
        if( (a[i]==b[j]) && (a[i]!=a[i-1]) && (i>=1))
        {
        cout<<a[i]<<" ";
        }
        i++;
      }

      else 
      {
        j++;
      }

   }
}
int main(){
    int n,i,a[50],m,b[50];
 cout<<"enter number of elements ";
 cin>>n;
 cout<<"enter number of elements in second array ";
 cin>>m;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
  cout<<"enter array elements";
  for(i=0;i<m;i++)
 {
    cin>>b[i];
 }
   merge(a,b,n,m);


    return 0;
}



