#include<cmath>
#include <iostream>
using namespace std;
int print_set(int n)
{
    int i,m,count=0;
    for(i=0;n>0;i++)
    {
      if((n&1)==1){
      count++;}                             //COUNT=COUNT+(N&1)
    
      n=n/2;
    }
    return count;

     

}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<print_set(n);
    return 0;
}
