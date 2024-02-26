#include <iostream>
using namespace std;



int majority(int a[],int n)
{
    int  i;
    int count=1;
    int res=0;

    for(i=0;i<n;i++)
    {
        if(a[res]==a[i])
        count++;

        else    
        {
        count--;
        if (count==0)
        {
        count=1;
        res=i;
        }
        }
    }

count=0;
    for(i=0;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
    }
    
    if(count>n/2)
    return count;
    else return -1;
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
   
   cout<<majority(a,n);
    
    return 0;
}





