#include <iostream>
using namespace std;
int lcm(int inp1, int inp2)
{
    // assume inp1 and inp2 arranged in ascending order

    int lcm=1;
    int res1=0;
    int i;
    for(i=1;i<=inp2;i++)
    {
        res1=inp1*i;
    if(res1%inp2==0)
    {
    lcm=res1;
    break;
    }
    }
    return lcm;
}
int main(){
    int inp1,inp2;
    cout<<"enter inp1 and inp2 in ascending ordrer";
    cin>>inp1>>inp2;
    cout<<lcm(inp1,inp2);

    return 0;
}
