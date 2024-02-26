#include <iostream>
using namespace std;

int sum_of_n(int n)
{
    
   if(n==0)
   return 0;  
   return n+sum_of_n(n-1);                // functions waiting for thir child functions to finsih 
   // theta n auxullary space becasue worst case n+1 function call stack
   
}

int main(){
    int n;
    cout<<"eneter n naturnal numbers";
    cin>>n;
    cout<<sum_of_n(n);

    return 0; 
}