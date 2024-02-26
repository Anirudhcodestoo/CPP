#include <iostream>
using namespace std;

int odd_occurences(int a[], int n)
{
    int i;
    int res2=a[0];
    int res=a[0];
    for(i=1;i<n;i++)
    {
       res=res^a[i];
    
    }
    for(i=1;i<n;i++)
    {
        res2=res^a[i];
        if(res2==a[i])
        return a[i];
    }
return -1;
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

    cout<<odd_occurences(a,n);

    
    return 0;
}