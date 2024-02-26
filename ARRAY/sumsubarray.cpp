#include <iostream>
using namespace std;



 bool sumsub(int a[],int n,int sum)
{
    int i,j;
    int add=0,l=0;
for(i=0;i<n;i++)
{
    add=add+a[i];
    while(sum<add)
    {
        add=add-arr[l]
        l++;  
    }
    if(add==sum)
    return true;
}
return false

    for(j=i;j<n;j++)
    {
        if(sum==add)
        return true;
        if(add<sum)
        {
        add=sum-a[l]
        l++;
        }
      
    }
    return false;
}


int main(){
    int a[100];
   int n,sum,i;
   cout<<"enter the sizw of array";
   cin>>n;
   cout<<"enter the sum needed";
   cin>>sum;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   
   cout<<sumsub(a,n,sum);
    
    return 0;
}





