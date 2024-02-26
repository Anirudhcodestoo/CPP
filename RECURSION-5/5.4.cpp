#include <iostream>
using namespace std;

int print_nto1(int inp)
{
    // cout<<inp<<"\t";
    // if(inp!=1)
    // print_nto1(inp-1);
if(inp==0)
return 0;

else{
cout<<inp<<"\t";
print_nto1(inp-1);}
return 0;
}
int main(){
    int inp;
    cout<<"enter input vlaue";
    cin>>inp;
    print_nto1(inp);
    return 0;
}