#include <iostream>
using namespace std;

int firstoccur(int a[],int n,int ele)
{
    int beg=0,end=n-1,mid;
   while(beg<=end)
   {
       mid=(beg+end)/2;
       if(a[mid]==ele &&a[mid-1]!=ele)
       return mid;
       if(a[mid]<ele)
       beg=mid+1;
       if(a[mid]>=ele) 
       end=mid-1;
   }
   return -1;

}

int lastoccur(int a[],int n,int ele)
{
    int beg=0,end=n-1,mid;
   while(beg<=end)
   {
       mid=(beg+end)/2;
       if(a[mid]==ele &&a[mid+1]!=ele)
       return mid;
       else if(a[mid]<=ele)
       beg=mid+1;
       else end=mid-1;
   }
   return -1;

}

int occurences(int a[],int n,int ele)

{
    int i,mid,count=0,beg=0,end=n/2,beg2=(n/2)+1,end2=n-1,frist;
    int first= firstoccur(a,n,ele);
    if(first==-1)
    return -1;

    int last=lastoccur(a,n,ele);

    int occur=last-first+1;

return occur;
   
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


cout<<occurences(a,n,ele);
    
    return 0;
}




