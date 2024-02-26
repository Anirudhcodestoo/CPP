#include <iostream>
using namespace std;

int largest(int a[],int n)
{
    int i;
    int greatest=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[greatest])
        {
            greatest=i;
        }
    }
    return greatest;
}

int seclargest(int a[],int n)
{
    int i;
    for(i=0;i+1<n;i++)
    {
        if(a[i]==a[i+1])
        return -1;            
    }
    int biggest= largest(a,n);
    int j,res=0;
    for(j=0;j<n;j++)
    {
       if(a[j]!=a[biggest])
       {
          if(a[j]>a[res])
          res=j;
       }
    }
    return res;

}




int main(){
      int a[100];
   int size,x,j;
   cout<<"enter the sizw of array";
   cin>>size;
   for(j=0;j<size;j++)
   {
    cin>>a[j];
   }
   
   cout<<seclargest(a,size);
    

    return 0;
}x