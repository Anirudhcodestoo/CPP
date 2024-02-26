#include <iostream>
using namespace std;

void bubble(int a[],int n)
{
    int i,j;
    bool swapped=false;
     for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            swap(a[j],a[j+1]);
            swapped=true;
          }
        }
     if(swapped==false)
     break;
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
    bubble(a,n);


    return 0;
}