#include <iostream>
using namespace std;

int lomuto(int a[],int l,int h)
{
    int j;
    int pivot=a[h];
    int i=l-1; 
   
    for(j=l;j<h;j++)
     {
       if(a[j]<pivot)
       {
        i++;
        swap(a[i],a[j]);
       }
    
     }
       swap(a[i+1],a[h]);
return i+1;
    
}

int kth(int a[],int n,int k,int low,int high)
{

    int p=lomuto(a,low,high);
    if(p==k-1);
    return a[p];
    if(p>k-1)
    {
      return kth(a,n,k,low,p-1);
    }
    else 
    {
      
        return kth(a,n,k,p+1,high);
    }
    
}


int main(){
    int k,n,i,a[50];

 cout<<"enter the number of elements";
 cin>>n;
 cout<<"enter the kth smallest elemetn you wan to find out";
 cin>>k;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }  

    cout<<kth(a,n,k,0,n-1);


    return 0;
}