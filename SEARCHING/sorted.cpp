#include <iostream>
using namespace std;

int sorted(int a[],int ele,int n,int beg,int end)
{
  int i,mid;
  while(beg<=end)
  {
       
        mid=(beg+end)/2;
        if(a[mid]==ele)
        return mid;
        if(a[mid]>a[0])
        {
          if(ele>a[0] && ele<a[mid])
            {
              return sorted(a,ele,n,0,mid-1);
            }
        }
        else
        {
          if(ele<a[n-1] && ele>a[mid])
          {
          return sorted(a,ele,n,mid+1,n-1);
          }

        }
        }

return -1;
  }



int main(){

int i,beg,end,ele,n;

cout<<"enter your searching of elements";
cin>>ele;
cout<<"enter number of elemens";
cin>>n;
int a[50];
cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}


cout<<sorted(a,ele,n,0,n-1);
    
    return 0;
}