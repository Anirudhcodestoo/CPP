#include <iostream>
using namespace std;

int peak(int a[],int n,int ele)
{
    int i,mid, beg=0,end=n-1;

    while(beg<=end)
    {
      mid=(beg+end)/2;
      if(a[0]>a[1])
      return a[0];

      if(a[n-1]>a[n-2])
      return a[n-1];

      if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
      return a[mid];
      
      if(a[mid]<=a[mid-1])
        end=mid-1;

else        
beg=mid+1;

    }
    return -1;


}

int main(){

int i,beg,end,ele,n;
int a[100];

cout<<"enter your number of elements";
cin>>n;

cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}

cout<<"enter seaarching element";
cin>>ele;


cout<<peak(a,n,ele);
    
    return 0;
}