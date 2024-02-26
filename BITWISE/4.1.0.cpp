#include <iostream>
using namespace std;

void set(int n, int k)
{
    int x;
   
   x=(1<<(k-1));
    if((n&x)!=0)
    {
        cout<<"its a set";
    }
    else 
        cout<<"not a set"; 
}

int main(){
    int n,k; 
    cout<<"enter number and position";
    cin>>n>>k;
    set(n,k);
    return 0;
}