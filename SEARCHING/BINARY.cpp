#include <iostream>
using namespace std;

int binary(int a[],int n,int ele)
{
    int i,mid, beg=0,end=n-1;

    while(beg<=end)
    {
      mid =(beg+end)/2;
      if(a[mid]==ele)
      return mid;
      if(a[mid]<ele)
        beg=mid+1;

      if(a[mid]>ele)
      end=mid-1;

    }
    return -1;
}
int recursive(int a[],int n,int ele, int beg,int end)
{
  if(beg>end)
    return-1;
    int mid=beg+end/2;
    if(a[mid]==ele)
    return mid;
    if(a[mid]<ele)
    beg=mid+1;
    if(a[mid]>ele)
    end=mid-1;

    return recursive(a,n,ele,beg,end);
}

int main(){

int i,beg,end,ele,n;

cout<<"enter your number of elements";
cin>>n;
int a[n];
cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}

cout<<"enter seaarching element";
cin>>ele;


cout<<recursive(a,n,ele,0,n-1);
    
    return 0;
}