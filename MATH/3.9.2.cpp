#include <cmath>
#include <iostream>
using namespace std;

void divisor(int n)
{
    int i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<"\t";
            
            
        }
        
    }
    for(i=sqrt(n);i>=1;i--)
    {
        if(n%i==0)
        {
            
            if(i!=n/i)
            cout<<n/i<<"\t";
        }
        
    }


}

int main(){
    int n;
    cout<<"enter inpur";
    cin>>n;
    divisor(n);
    return 0;
}