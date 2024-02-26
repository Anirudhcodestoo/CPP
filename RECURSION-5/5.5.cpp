#include <iostream>
using namespace std;

int print_nto1(int inp)
{
    if(inp==0)
    return 0;
    else{
    print_nto1(inp-1);
    cout<<inp<<"\t";
    }
    return 0;
}
int main(){
    int inp;
    cout<<"enter input vlaue";
    cin>>inp;
    print_nto1(inp);
    return 0;
}