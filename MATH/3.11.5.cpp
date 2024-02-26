#include <iostream>
using namespace std;
int power(int n,int x)
{
    int m,i,k;
    int res=1;
   for(i=0;x>0;i++)
    {
      if(x%2!=0){ 
      m=1<<i;
      if (i==0)
      res=n;
      for(k=1;k<=i;k++)
      {
       
       
        res=res*n*n; 
       
       
      }
        
      }
      else
      {
        m=0<<i;  
        
      }
      x=x/2;

     
    }
   
    
    return res;
   

}

int main(){
     int n,x;
        cout<<"enter input number";
        cin>>n;
        cout<<"enter number of which power must be raised";
        cin>>x;
        cout<<power(n,x);
    
    return 0;
}