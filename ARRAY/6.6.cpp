#include <iostream>
using namespace std;
int delet(int a[],int n,int ele)
{
    int j,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        break;

    }
 if(n==i)        //// this menas we incremented i but couldnt find the deleting ele in array
 return -1;
   
   for(j=n-1;j>i;j--)
   {
    a[j-1]=a[j];
   }
    
   return n-1;
}

int insert(int a[], int pos, int ele,int cap)
{
  int i, idx;

 
  if(ele==cap)
  return n;
 idx=pos-1;

  for(i=idx;i<n;i++)
  {
    a[i+1]=a[i];
  }
  return n+1;



}

int main(){
   int a[100];
   int n,pos,i,ele,cap;
   cout<<"enter the sizw of array";
   cin>>n;
   cout<<"enter the deleting ele,ment of array";
   cin>>ele;
   cout<<"enter the capacity of array";
   cin>>cap
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   cout<<delet(a,n,pos,ele);
  cout<<insert(a,n,del,cap);
    return 0;
}