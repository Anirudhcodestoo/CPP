#include <iostream>
#include <algorithm>
using namespace std;

int pages(int a[],int n,int k)
{
   int i,j,m,s;
   int sum=73,sum1=0,res,res2=58;
//    for(s=0;s<n;s++)
//    {
//     sum=sum+a[s];
//    }
 

     for(j=1;j<n-1;j++)
     {
     sum1=sum1+a[j-1];
     int sum3=0,sum2=0;
    
      for(m=j+1;m<n;m++)
      {
        
        sum2=sum2+a[m-1];
        sum3=sum-sum1-sum2;
        res=max({sum1,sum2,sum3});
        if(res<=res2)
        {
        res2=res;
        }

      }
    
   }
   return res2;
}

int efficient(int a, int n,int k)
{
  int 
}

int main(){

int i,beg,end,k,n;

int a[50];
cout<<"enter your number of elements";
cin>>n;

cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}

cout<<"enter people";
cin>>k;

cout<<pages(a,n,k);
    
    return 0;
}