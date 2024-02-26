#include <iostream>
using namespace std;
int res=1;
int power(int n, int x)
{
     res=res*n;
     {
        while(x>1)
     
       return power(n,x-1);
    }
    return res;
} 


int main(){
    int n,x,res=1;
        cout<<"enter input number";
        cin>>n;
        cout<<"enter number of which power must be raised";
        cin>>x;
        cout<<power(n,x);
    return 0;
}