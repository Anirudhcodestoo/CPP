#include <iostream>
using namespace std;
int factorial(int n)
{
    int i;
    int fact=1;
     if (n==1 || n==0)    // mistake was tha 
     return 1;

  for(i=n;i>1;i=i-2)
  {
    fact=fact*(i*(i-1));
  }
  return fact;

}
int main(){
    int n,m;
    cout<<"enter the number";
    cin>>n;
    m=factorial(n);
    cout<<m;
    return 0;
}