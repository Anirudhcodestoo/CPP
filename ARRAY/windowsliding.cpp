#include <iostream>
using namespace std;



int sliding(int a[],int n,int k)
{

    int init=0,sum,m=k;
    int i;
    for(i=0;i<k;i++)
    {
        init=init+a[i];
    }
    int res=init;
    for(i=1;m<n;i++)
    {   sum=0;
        sum=res-a[i-1]+a[m];
        res=max(res,sum);
        m++;

    }
    return res;
}

int main(){
    int a[100];
   int n,k,i;
   cout<<"enter the sizw of array";
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   cout<<"enter k consecutive elements";
   cin>>k;
   
   cout<<sliding(a,n,k);

    
    return 0;
}






