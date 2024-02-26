#include <iostream>
using namespace std;
int gcd(int inp1, int inp2)
{
    if(inp2==0)
    return inp1;

    return(inp2,inp1%inp2);

}
void lcm(int inp1, int inp2)
{
    int g;
    g=inp1*inp2;
    cout<<(g/gcd(inp1,inp2));
}
int main(){
    int inp1,inp2;
    cout<<"enter inp1 and inp2 in ascending ordrer";
    cin>>inp1>>inp2;
    lcm(inp1,inp2);

    return 0;
}

