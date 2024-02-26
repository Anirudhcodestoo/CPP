#include <iostream>
using namespace std;

int hoarse(int a[],int l, int h)
{
    int i,j;
    int i=l-1;
    int pivot=a[h];
    j=h+1;
    while(true)
    {
       do
       {
        i++;
       } while (a[i]<pivot);

       do
       {
           j--;
       } while (a[j]>pivot);
       
       if(i>=j)
       return j;
       else
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
 int l=a[0];
 int h=a[n-1];
    hoarse(a,l,h);

    return 0;
}