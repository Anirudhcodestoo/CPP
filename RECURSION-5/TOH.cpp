#include <iostream>
using namespace std;
void toh(int n,char A, char B, char C)
{
    if(n==1)
    cout<<"move 1 from"<<A<<"to"<<C<<"\n";
    toh(n-1,A,C,B);
    cout<<"move"<<n<<"from"<<A<<"to"<<C;
    toh(n-1,B,A,C);

}
int main(){
    char A,B,C;
    int n;
    cout<<"enter number of rings";
    cin>>n;
    toh(n,A,B,C);
    return 0;

    
}