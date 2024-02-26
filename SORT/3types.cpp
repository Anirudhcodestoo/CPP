#include <iostream>
using namespace std;

int hoarse(int a[],int n)
{
     int low=0,mid=0,high=n-1;
     while(mid<=high)
     {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        if(a[mid]==1)
        {
        mid++;
        }
        else 
        {
        swap(a[mid],a[high]);
        high--;
        }
     }
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
    hoarse(a,n);


    return 0;
}