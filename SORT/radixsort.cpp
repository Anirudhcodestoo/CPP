#include <iostream>
using namespace std;

void count(int a[],int n,int exp)
{
     int i,j,count[40];
    for(i=0;i<k;i++)
    {
        count[i]=0;
    }

    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(i=1;i<k;i++)
    {
            count[i]=count[i]+count[i-1];
    }
    int output[50];
    output[n];
    for(i=n-1;i>=0;i--)
    {
       output[count[a[i]]-1]=a[i];
    }

    for(i=0;i<n;i++)
    {
        a[i]=count[i];
    }

}
void radix(int a[],int n,)
{
    int i,max=0,count,exp;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        max=a[i];
    }
    count=log10(max);
    for(exp=1;(a[i]/exp)>0;exp=exp*10)
    {
     count(a,n,exp);
    }
}


int main(){
    int n,i,k,a[50];
 cout<<"enter number of elements ";
 cin>>n;
 cout<<"enter array elements";
 cout<<"enter kth elemtns";
 cin>>k;
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
    countnaive(a,n,k);


    return 0;
}