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

int qhoarse(int a[],int l, int r)
{
    if(l<r)
    {
        int h=hoarse(a,l,r);
        qhoarse(a,l,h);
        qhoarse(a,h+1,r);
    }
}


int main(){
    int l,r,h,n,i,a[50];
cout<<"enter the numer of elements";
cin>>n;
 cout<<"enter leftmost element ";
 cin>>l;
 cout<<"enter rightmost element";
 cin>>h;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
    cout<<lomuto(a,l,h);


    return 0;
}