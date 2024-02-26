#include <iostream>
using namespace std;
int sum=0;
int sum_digits(int n)
{  
    if(n<=0)
    return sum;
    sum=sum+n%10;
    return sum_digits(n/10);
    
  
}


int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sum_digits(n);
    
    return 0;
}