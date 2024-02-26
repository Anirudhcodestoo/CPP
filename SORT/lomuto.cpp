#include <iostream>
using namespace std;

int lomuto(int a[],int l,int h)
{
    int j;
    int pivot=a[h];
    int i=l-1; 
   
    for(j=l;j<h;j++)
     {
       if(a[i]<pivot)
       {
        i++;
        swap(a[i],a[j]);
       }
    
     }
       swap(a[i+1],a[h]);
return i+1;
    
}

int main(){
    int l,r,h,n,i,a[50];
cout<<"enter the numer of elements";
cin>>n;
 cout<<"enter leftmost element ";
 cin>>l;
 cout<<"enter rightmost element";
 cin>>h;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
    cout<<lomuto(a,l,h);


    return 0;
}