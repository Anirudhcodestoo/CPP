#include <iostream>
using namespace std;
// int powerof2(int n)
// {
//     if(n==0)
//     return 0;
//    if((n&(n-1)==0))
//    return 1;
//    else 
//    return 0;     /// one line make function type bool
//                  ////return(n&&(n&(n-1)==0)) if nis zero first only returns 0
//                  // if n not 0 then if n & n-1 evaluates and if its 0 return true
// }

bool powerof2(int n)
{
    return (n&&(n&(n-1))==0);
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<powerof2(n);
    return 0;
}