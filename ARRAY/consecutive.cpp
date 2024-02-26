#include <iostream>
using namespace std;



int ONES(int a[],int n)
{
   int i,count=0,temp[n+5],j=-1;

  

   for(i=0;i<n;i++)
   {
    if(a[i]!=1)
    {
        j++;
     temp[j]=0;
     j++;
     
    break;
    }
    if(a[i]==1)
    {
        count++;
        temp[j]=count;
    }
   }
    int result=temp[0]; 
    for(j=0;j<n-1;j++)
    {
        if(temp[j+1]>result)
        result=temp[j+1];
    }
    return result;

   

}


// int efficient(int a[], int n )
// {
//     int i;
//     int count=0,res=0;

//     for(i=0;i<n;i++)
//     {
//         if(a[i]==0)
        
//         count=0;
        


//         if(a[1]==1)
//         {
//             count++;
//             res=max(res,curr);
//         }
//     }
// 
int main(){
    int a[100];
   int n,x,i;
   cout<<"enter the sizw of array";
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   
   cout<<ONES(a,n);
    
    return 0;
}





