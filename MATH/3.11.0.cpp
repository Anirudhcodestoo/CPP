#include <iostream>
using namespace std;

int power(int n, int x)
{
    int i,j;
    int result=1;
    if(x==0)
    return 1;
    if(x==1)
    return n;
    for(i=2;i<=x;i++)
    {
        result=result*(n*n);
    }
    return result;
    
}

int main(){
    int n,x;
    cout<<"enter input number";
    cin>>n;
    cout<<"enter number of which power must be raised";
    cin>>x;
    cout<<power(n,x);
    return 0;
}