#include <iostream>
using namespace std;

int binary(int a[],int n,int ele)
{
    int i,mid, beg=0,end=n-1;

    while(beg<=end)
    {
      mid =(beg+end)/2;
      if(a[mid]==ele&&a[mid-1]!=ele)
      return mid;
      if(a[mid]<ele)
        beg=mid+1;

      if(a[mid]>=ele)
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

cout<<"enter seaarching element";
cin>>ele;


cout<<binary(a,n,ele);
    
    return 0;
}