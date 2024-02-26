#include <iostream>
using namespace std;
int rope(int n, int a, int b, int c)
{
    if(x||y||z==-1)
    {
        return -1;
    }
   int x=n-a;
   int y=n-b;
   int z=n-c;
   n=a;
   return rope(n,x,y,z);   

}

int main(){
int n,a,b,c;
    cout<<"enter the actual numebr";
    cin>>n;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    cout<<rope(n,a,b,c);
    return 0;
}