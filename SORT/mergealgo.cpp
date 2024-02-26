#include <iostream>
#include <cmath>
using namespace std;


void mergeSort(int a[],int l,int r)
{
 if(r>l)
 {
    int m=l+((r-l)/2);
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,r);
 }
}
int main(){
    int i,n,low,mid,high,a[50];
 cout<<"enter number of elements ";
 cin>>n;
cout<<"enter begining element ";
 cin>>low;
 cout<<"enter mid element ";
 cin>>mid;
 cout<<"enter high element";
 cin>>high;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }

   merge(a,low,high);


    return 0;
}



