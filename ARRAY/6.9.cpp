#include <iostream>
using namespace std;
int check_sorted( int a[], int n )
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        return false;
    }
    return true;
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
   
   cout<<check_sorted(a,n);
    
    return 0;
}