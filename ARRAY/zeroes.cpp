#include <iostream>
using namespace std;


// void zeroes(int a[],int n)
// {
//     int temp[n];
//     int i,j,k;
//     int end=(n-1);
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         {
//             for(j=1+i;j<end;j++)
//             {
//                temp[j-1]=temp[j];
//             }

//             temp[end]=0;
//             end--;
           
//         }
         
//     }
     
    
//     for(k=0;k<n;k++)
//     {
//         cout<<temp[k];
//     }

// }

void zeroes2(int a[], int n)
{
    int t[n];
    int i,j,k;
    int end=(n-1);
    for(i=0;i<n;i++)
{
    t[i]=a[i];
}
    for(i=0;i<n;i++)
    {
        if(a[i]==0 && a[end]!=0)
         {
             t[i]=t[end];
            t[end]=0;
           
            end--;
         }
    }
    for(k=0;k<n;k++)
    {
        cout<<t[k];
    }
}

int main(){
      int a[100];
   int n,x,j;
   cout<<"enter the size of array";
   cin>>n;
   for(j=0;j<n;j++)
   {
    cin>>a[j];
   }
   
   zeroes2(a,n);
    

    return 0;
}
