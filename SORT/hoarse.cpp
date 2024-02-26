#include <iostream>
using namespace std;

int hoarse(int a[],int l, int h)
{
    int i=l-1,j=h+1;
    int pivot=a[l];
   while(true)
   {
    do
    {
      i++;
    } while(a[i]<pivot);
    do
    {
    j++;
    } while(a[j]>pivot);

    if(i>=j) 
    return j;
    swap(a[i],a[j]);

   }
}

int main(){
    int n,i,a[50];
 cout<<"enter number of elements ";
 cin>>n;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
 int l=0,h=n;
    hoarse(a,l,h);


    return 0;
}