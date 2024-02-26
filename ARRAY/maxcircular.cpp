#include <iostream>
using namespace std;



void circular(int a[],int n)
{    
    int i;
    int j;
    int sum=a[i];
    int res=a[0];

    for(i=0;i<n;i++)
    {
        sum=a[i];
      for(j=n-1;j!=i;j--)
      {
        sum=sum+a[j]
      }

      res=max(sum,res);

    }    

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
   
    circular(a,n);
    
    return 0;
}





