#include <iostream>
using namespace std;

// int getlargest( int a[],int n)
// {
//     int i,j,large;
//     large=a[0];
//     int k=0;

//     for(i=0;i<n;i++)
//     {
//         for(j=i;j<n;j++){
//         if(large<a[j]){
//         large=a[j];
//         k=j;
//         break;
//         }
//         }

//     }
//     return k;
// }
int getlargest(int a[], int n);
int main(){
    int a[100];
   int n,x,i;
   cout<<"enter the sizw of array";
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   
   cout<<getlargest(a,n);
    
    return 0;
}
int getlargest( int a[],int n)
{
    int i,j,large;
    large=a[0];
    int k=0;

    for(i=1;i<n;i++)
    {
        
        if(large<a[i]){
        large=a[i];
        k=i;
       
        }   // we can  return largest element also by doing 
             //return large;
        }

    
    return k;
}