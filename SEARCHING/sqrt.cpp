#include <iostream>
using namespace std;

int root(int a[],int n)
{
    int i,end=n,beg=0;
    while(beg<=end)
    {
        int mid=(beg+end)/2;

        if((a[mid]*a[mid])==n)
        return mid;
  
        if((a[mid]*a[mid])<n && (a[mid+1]*a[mid+1])>n)
        return mid;

        if((mid*mid)>n)
        end=mid-1;

       if((a[mid]*a[mid])<n)
       beg=mid+1;

    }
    return -1;
}


int main(){

int i,beg,end,ele,n;

cout<<"enter your element";
cin>>n;
int a[50];

for(i=0;i<=n;i++)
{
  a[i]=i;
}

cout<<root(a,n);
    
    return 0;
}




















