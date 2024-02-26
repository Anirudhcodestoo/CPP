#include <iostream>
using namespace std;



bool equilibrium(int a[],int n)
{  
     int i,j,k;
     for(i=0;i<n;i++)
     {
        int left=0,right=0;

        for(j=0;j<i;j++)
        {
          left=left+a[j];
        }

        for(k=n-1;k>i;k--)
        {
            right=right+a[k];
        }
        if(left==right)
        return true;
     }
     return false;

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
   
   cout<<equilibrium(a,n);
    
    return 0;
}





