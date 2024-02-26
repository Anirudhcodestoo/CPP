#include <iostream>
using namespace std;

int gcd(int inp1,int inp2)
{
    int i;
    int gcd=1;
    
    for(i=1;i<=inp1;i++)
    {
        
        if(inp1%i==0 && inp2%i==0)
        gcd=i;
        
    }
    
    return gcd;   
}

int main(){
    int inp1,inp2;
    cout<<"enter inp1 and inp2 in ascending order";
    cin>>inp1>>inp2;
    cout<<gcd(inp1,inp2);
    return 0;
}