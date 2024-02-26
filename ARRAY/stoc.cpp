#include <iostream>
#include <cmath>
using namespace std;


int stock(int[],int start,int end)
{
    int i;
    if(end<=start)
    {
        return 0;
    }
    for(i=start;i=end;i++)
    {
        for(j=i+1;j<)
    }
    
}


int efficient(int a[], int n)
{
    int i;
    int profit=0;
    int buy;
    
    for(i=0;i<n-1;i++)
    {

        if(a[i]>a[i-1])
        {
            profit=profit+a[i]-a[i-1];
        }

    }
    return profit;
}

int main(){
      int a[100];
      int start,end;
   int size,x,i,j;
   cout<<"enter the sizw of array";
   cin>>size;
   for(j=0;j<size;j++)
   {
    cin>>a[j];
   }
   
   cout<<stock(a,0,size);
    

    return 0;
}