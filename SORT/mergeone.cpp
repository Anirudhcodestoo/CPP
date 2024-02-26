#include <iostream>
#include <cmath>
using namespace std;


void merge(int a[],int low,int mid,int high)
{
    int i,o=0;
    int left[50],right[50];
    for(i=low;i<=mid;i++)
    {
        left[i]=a[i];
    }
    for(i=mid+1;i<=high;i++)
    {
        right[o]=a[i];
        o++;
    }
    
      int k=0,m=0,j=0;
    while(k<=mid || m<=(high-mid-1))
    {
        if((left[k]<=right[m]) && k<=mid)
        {
            a[j]=left[k];
            k++;
            j++;
        }
        else{
            a[j]=right[m];
            m++;
            j++;
        }
    }
        for(i=0;i<=high;i++)
   
        {
            cout<<a[i]<<" ";
        }

    }

    // while(i<=mid || j<=high)
    
    // {
    //   if(a[i]<=a[j] && i<=mid)      ---->> here print on screen not toSAVE ELEMENTS IN ARRAY
    //   {
    //      cout<<a[i];
    //      i++;
    //   }
    //   else 
    //   {
    //      cout<<a[j];
    //      j++;
    //   }
    // }
  

int main(){
    int i,n,low,mid,high,a[50];
 cout<<"enter number of elements ";
 cin>>n;
cout<<"enter beginning element ";
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

   merge(a,low,mid,high);


    return 0;
}



