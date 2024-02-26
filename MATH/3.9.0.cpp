#include <iostream>
using namespace std;
void divisor(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
            if(n%i==0)
            {
            cout<<i;
            cout<<"\t";
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