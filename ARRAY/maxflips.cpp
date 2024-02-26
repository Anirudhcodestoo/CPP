#include <iostream>
using namespace std;



void maxflips(int a[],int n)
{
    int i;
    int count=0;
    int flips;
    int count2=0;
    for(i=0;i<n-1;i++)
   {

      if(a[i]==0&&(a[i+1]==1||a[i-1]==1))
      count++;

      if(a[i]==1&&(a[i+1]==0||a[i-1]==0))
      {
        count2++;
      }
   }

   if(count==0&&count2==0)
   cout<<"noflips needed";
   if(count==count2)
   {
    cout<<" either of them can be flipped";
   }

   if(count>count2)
   {
   for(i=0;i<n;i++)
   {
    if(a[i]==0)
    {
    a[i]=1;
    cout<<"flip"<<i<<"to"<<"1"<<"\n";
    }
   }
   }
   if(count<count2)
   {

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
        a[i]=0;
        cout<<"flip"<<i<<"to"<<"0"<<"\n";
        }

    }
   }

}
void efficient(int a[],int n)
{
    int i;
   
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
        if(a[i]!=a[0])
        {
            cout<<"from"<<i<<"to";
        }
        else cout<<i-1<<" ";
        }
    }

    if (a[n-1]!=a[0])
    {
        cout<<n-1<<endl;
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
   
  efficient(a,n);
    
    return 0;
}





