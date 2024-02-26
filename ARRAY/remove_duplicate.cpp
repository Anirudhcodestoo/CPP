#include <iostream>
using namespace std;
void duplicate(int a[],int size)
{
  int temp[size];
  temp[0]=a[0];
  int res=1,i;

  for(i=1;i<size;i++)
  {
      if(a[i]!=a[i-1])
      {
      temp[res]=a[i];
      res++;
      }
  }

  for(i=0;i<res;i++)
  {
    cout<<temp[i]<<" ";
   
  }
  cout<<"\n";
  cout<<res;



}

void efficient(int a[],int size)
{
    int i;
    int res=1;
    for(i=1;i<size;i++)
    {
        if(a[i-1]!=a[i])
        {
            a[res]=a[i];
            res++;
        }
    }

     for(i=0;i<res;i++)
      {
        cout<<a[i];
      }
      cout<<"\n";
      cout<<res;

}
int main(){
      int a[100];
   int size,x,j;
   cout<<"enter the size of array";
   cin>>size;
   for(j=0;j<size;j++)
   {
    cin>>a[j];
   }
   
   efficient(a,size);
    

    return 0;
}