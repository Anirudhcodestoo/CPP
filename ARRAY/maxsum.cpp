#include <iostream>
using namespace std;



// int maxsum(int a[],int n)
// {
//     int i,j;
//      int res=a[0];
//      int sum=a[0];
  


  
//    for(i=0;i<n;i++)
//    {
//      sum=0;
//      for(j=i;j<n;j++)
//    {  
//         if(sum>res)
//         res=sum;
//        sum=sum+a[j];
//        res=max(sum,res);

//    }
//    }
//    return res;
// }


   int efficient(int a[],int n)
   {
        int i;
        int max_value=a[0];
        int res=a[0];
        for(i=1;i<n;i++)
        {   
             max_value=max(max_value+a[i],a[i]);
              res=max(max_value,res);
            
        }
        return max_value;
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
   
  cout<<efficient(a,n);
    
    return 0;
}





