#include <iostream>
using namespace std;

void selection(int a[],int n)
{
     int i,j,key;
     for(i=1;i<n;i++)
     {
        key=a[i];
      
        for(j=i;((key<a[j-1])&& j>=1);j--)        // --------> algo is stable
        {  
             a[j]=a[j-1];
        }
        a[j]=key;
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
    selection(a,n);


    return 0;
}

