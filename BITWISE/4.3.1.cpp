#include <iostream>
using namespace std;
int powerof2(int n)
{
    if(n==0)
    return 0;
    int rem;
    rem=(n%2);
    if(rem!=0)
    return 0;
    else
    while(n>2)
    return powerof2((n/2));
    

    return 1;
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<powerof2(n);
    return 0;
}