#include <iostream>
using namespace std;

int prime(int n)
{
    
    int i;
    if(n%2==0)
    return 0;
    
    for(i=3;i<n;i=i+2)
    {
        if(n%i==0)
        return 0;
        
    }
    return 1; 
}

int main(){
    int n;
    cout<<"enter numebr";
    cin>>n;
    cout<<prime(n);

    return 0;
}