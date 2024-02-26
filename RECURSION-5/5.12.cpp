#include <iostream>
using namespace std;
int function(int a[])
{
     int n=sizeof(a)/sizeof(a[0]);
     return n;
}




int main(){
    int a[5]={3,5,4,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<function(a);
    return 0;
}