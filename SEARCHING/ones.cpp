#include <iostream>
using namespace std;

int binary(int a[],int n)
{
    int i,mid, beg=0,end=n-1;

    while(beg<=end)
    {
      mid =(beg+end)/2;
      if(a[mid]==1&&a[mid-1]!=1)
      return n-mid;
      if(a[mid]==0)
        beg=mid+1;

      if(a[mid]>=1)
      end=mid-1;

    }
    return -1;
}


int main(){

int i,beg,end,ele,n;

cout<<"enter your number of elements";
cin>>n;
int a[50];
cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}




cout<<binary(a,n);
    
    return 0;
}