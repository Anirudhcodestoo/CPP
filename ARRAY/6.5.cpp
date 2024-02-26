#include <iostream>
using namespace std;
int search(int a[],int n,int x)
{
    int i;
   for(i=0;i<n;i++)
   {
    if(a[i]==x)
    return i;
   }
    
   return -1;
}

int main(){
   int a[100];
   int n,x,i;
   cout<<"enter the sizw of array";
   cin>>n;
   cout<<"enter the searching ele,ment of array";
   cin>>x;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   cout<<search(a,n,x);

    return 0;
}