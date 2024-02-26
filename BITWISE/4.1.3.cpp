#include <iostream>
using namespace std;
void setbits(int n, int k)
{
    int i;
    for(i=0;i<k-1;i++){

         n=n/2;
    }
    {
    if((n&1)!=0)
    cout<<"yes";
    else 
    cout<<"no";
    }
}

int main(){
    int n,k; 
    cout<<"enter number and position";
    cin>>n>>k;
    setbits(n,k);
    return 0;
}