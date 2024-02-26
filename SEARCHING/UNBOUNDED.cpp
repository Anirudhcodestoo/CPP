#include <iostream>
using namespace std;

int infinite(int a[],int ele)
{
    int i,mid, beg=0,end=ele;

    while(beg<=end)
    {
      mid =(beg+end)/2;
      if(a[mid]==ele)
      return mid;
      if(a[mid]<ele)
        beg=mid+1;

      if(a[mid]>=ele)
      end=mid-1;

    }
    return -1;
}

int binary(int a[],int ele,int beg,int end)
{
    int i,mid;

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


int unbounded(int a[],int ele)
{
    int i;
    if(ele==a[0])
    return 0;
    
    while(a[i]<ele)
    {
      i=i*2;
    }
      if(a[i]==ele)
      return i;
      if(a[i]>ele)    
      {
        return binary(a,ele,i/2,i-1);
      }

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

cout<<"enter seaarching element";
cin>>ele;


cout<<infinite(a,ele);
    
    return 0;
}