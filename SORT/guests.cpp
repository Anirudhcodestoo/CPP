#include <iostream>
#include <algorithm>
using namespace std;


int guests(int enter[],int exit[],int n)
{

    sort(enter,enter+n);
    sort(exit,exit+n); 
    int maxi=1,res=1,i;
    for(i=1;i<n;i++)
    {
       if(enter[i]<=exit[i-1])
       {
        res++;
        maxi=max(maxi,res);
       }
       else 
       res=1;
    }
    return maxi;
}


int main(){
    int n,i,enter[50],exit[50];
cout<<"enter the numer of elements";
cin>>n;
cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>enter[i];
 }
 cout<<"enterexit time";
  for(i=0;i<n;i++)
 {
    cin>>exit[i];
 }
    cout<<guests(enter,exit,n);


    return 0;
}