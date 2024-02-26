#include <iostream>
using namespace std;

// int getlargest( int a[],int n)
// {
//     int i,j,largest;
//     largest=a[0];
//     int k=0;
//     int res=-1;
//     int sec_largest=a[0];

//     for(i=1;i<n;i++)
//     {
        
//         if(largest<a[i]){
//         largest=a[i];

//         k=i;
        
//         }   // we can  return largest element also by doing 
//              //return seC_largest;
//         }
//  if(sec_largest==largest)
//  {
//     sec_largest=a[1];
//  }
//         for(j=1;j<n;j++)
//         {

//             if(sec_largest<a[j] && a[j]!=largest)
//             {
//             sec_largest=a[j];
//             res=j;
//             }

//         }
// return res;
    
    
// }
int largest(int a[],int n)
{
    int i;
    int greatest=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[greatest])
        {
            greatest=i;
        }
    }
    return greatest;
}

int main(){
    int a[100];
   int n,x,i;
   cout<<"enter the sizw of array";
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   
   cout<<largest(a,n);
    
    return 0;
}





