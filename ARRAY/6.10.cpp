#include <iostream>
#include <cmath>
using namespace std;

void reverse(int a[], int n)
{
    int b[50];
    int i,j,m;
    int k=0;
    
  for(i=0;i<n/2;i++)
  b[i]=a[n-i-1];
  for(j=(n);j>(n/2);j--)
  {
  b[j]=a[k];
  k++;
  }
  for(m=0;m<n;m++)
  {
    cout<<b[m];
  }

  
}

int main(){
      int a[100];
   int n,x,j;
   cout<<"enter the sizw of array";
   cin>>n;
   for(j=0;j<n;j++)
   {
    cin>>a[j];
   }
   
   reverse(a,n);
    

    return 0;
}