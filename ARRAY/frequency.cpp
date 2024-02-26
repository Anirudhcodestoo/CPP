#include <iostream>
using namespace std;



void frequency(int a[],int n)
{
    int i;
    int count=1;
    int init=a[0];

    for(i=1;i<n;i++)
    {
    if(a[i]==init)
    {
        count++;
    }
    if(a[i]!=init)
    {
        
        cout<<"count "<<"of "<<init<<"is "<<count<<" ";
        init=a[i];
        count=1;
    }
    }
    cout<<"count "<<"of "<<init<<" is"<<count<<" ";
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
   
   frequency(a,n);
    
    return 0;
}





