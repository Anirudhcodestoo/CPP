#include <iostream>
using namespace std;



int evenodd(int a[],int n)
{
    int i;
    bool flag,flag2;
    if(a[0]%2==0)
    flag2=true;
    else flag2=false;
    flag= flag2;

    int res=1,count=1;

    for(i=1;i<n;i++)
    {
        if(a[i]%2==0)
        flag2=true;
        else flag2=false;
          if(flag2==flag)
        {        count=1;
        res=count;
        }
        if(flag!=flag2)
        {
            flag=flag2;
        count++;
        }
        res=max(count,res);
       

    }
    return res;
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
   
   cout<<evenodd(a,n);
    
    return 0;
}





