#include <iostream>
using namespace std;
//  BASIC EUCLIDIANS FORMULA 

int gcd(int inp1,int inp2)
{
    int i;
    while(inp1!=inp2)
    {
    if(inp1>inp2)
    inp1=inp1-inp2;
    if(inp2>inp1)
    inp2=inp2-inp1;
    }
    return inp1;

}

int main(){
    int inp1,inp2;
    cout<<"enter inp1 and inp2 in ascending order";
    cin>>inp1>>inp2;
    cout<<gcd(inp1,inp2);
    return 0;
}