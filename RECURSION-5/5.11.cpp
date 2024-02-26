#include <iostream>
using namespace std;

int count=0;
int rope(int n, int a, int b, int c)
{
    if(a||b||c==0)
    count++;
    
    if(a||b||c<0)
    return count;
    if (a&&b&&c==0)
    return -1;

    
    else 
    return rope(n,n-a,n-b,n-c); 
}

int main(){
    int  n,a,b,c;
    cout<<"enter 3 numbers and one number";
    cin>>n>>a>>b>>c;
    cout<<rope(n,a,b,c);

    return 0;
}