#include <iostream>
#include <cmath>
using namespace std;

void selection(float a[],int n)
{
     int i,j;
     float temp[50];
     int min=0;
     for(i=0;i<n;i++)
     {
        min=0;
        for(j=1;j<n;j++)
        {
           if(a[j]<a[min])
           {
            min=j;
           }

        }
        temp[i]=a[min]; 
        a[min]=INFINITY;
     }
}

void optimal(int a[],int n)
{
    int i,j,min_ind;
    for(i=0;i<n-1;i++)
    {
      min_ind=i;
      for(j=i+1;j<n;j++)
      {
        if(a[j]<a[min_ind])
        {
         min_ind=j;
        }
        swap(a[min_ind],a[i]);
      }
    }
    for(i=0;i<n;i++)
    cout<<a[i];
    

}
int main(){
    int n,i,a[50];
 cout<<"enter number of elements ";
 cin>>n;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
    optimal(a,n);


    return 0;
}



