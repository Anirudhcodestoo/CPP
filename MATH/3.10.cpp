#include <iostream>
using namespace std;
void print_prime(int n)
{
    int i;
    if(i=2)
    cout<<"2";

    if(i!=2)
    {
    cout<<"2"<<"\t"<<"3"<<"\t";
    for(i=5;i<=n;i=i+6)
    {    
        cout<<i<<"\t"<<i+2<<"\t";
        
    }
    }
}

int main(){
    int n;
    cout<<"enter inpur";
    cin>>n;
    print_prime(n);
    
    return 0;
}