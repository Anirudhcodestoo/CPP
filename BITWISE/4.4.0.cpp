#include <iostream>
using namespace std;
void odd_occurences(int a[], int n)
{
    int i,j;
    int g=0;
     
    for(i=0;i<n;i++)
    {
        int count=0;
       
        for(j=0;j<n;j++)
        {
          if(a[i]==a[j])
          {
            count++;
          }
          
        }
        
        if((count%2)!=0 && g<2){
          cout<<a[i];
          g++;
        }
        
        
    }

}

int main(){

    int a[30],i,n;
    cout<<"enter the number of array elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the elements";
        cin>>a[i];
    }

    odd_occurences(a,n);

    return 0;
}