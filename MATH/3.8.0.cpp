#include <iostream>
#include<cmath>
using namespace std;

int prime_factors(int n)
{
    int i;
    
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
       { cout<<"\t";
        cout<<i;
        return prime_factors(n/i);
       }
    }
    cout<<"\t";
    return n;

}
int main(){
    int n;
    cout<<"enter the number for which you want prime factor";
    cin>>n;
   cout<<prime_factors(n);
    


    return 0;
}